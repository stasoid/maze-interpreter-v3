void
update_cells_ui_state(GameState *game_state, RenderBasis *render_basis, Mouse *mouse, u64 time_us)
{
  V2 mouse_maze_pos = untransform_coord(render_basis, (V2){mouse->x, mouse->y});
  V2 cell_pos = round_down((mouse_maze_pos / game_state->cell_spacing) + 0.5f);

  V2 world_cell_pos = cell_coord_to_world(game_state->cell_spacing, cell_pos.x, cell_pos.y);
  Rectangle cell_bounds = radius_rectangle(world_cell_pos, calc_cell_radius(game_state));

  b32 hide_cell_menu = false;
  b32 mouse_click = mouse->l_on_up && !game_state->panning_this_frame;

  if (in_rectangle(mouse_maze_pos, cell_bounds))
  {
    Cell *cell_hovered_over = get_cell(&game_state->maze, cell_pos.x, cell_pos.y);
    if (cell_hovered_over && cell_hovered_over->type != CELL_NULL)
    {
      cell_hovered_over->hovered_at_time = time_us;
    }

    if (mouse_click)
    {
      if (cell_hovered_over)
      {
        if (time_us >= cell_hovered_over->edit_mode_last_change + seconds_in_u(0.01))
        {
          cell_hovered_over->edit_mode_last_change = time_us;

          // Only update time if the menu wasn't already open
          if (game_state->ui.cell_type_menu.cell == 0)
          {
            game_state->ui.cell_type_menu.opened_on_frame = time_us;
          }
          game_state->ui.cell_type_menu.cell = cell_hovered_over;
        }
      }
      else
      {
        hide_cell_menu = true;
      }
    }
  }
  else if (mouse_click)
  {
    hide_cell_menu = true;
  }

  if (hide_cell_menu)
  {
    game_state->ui.cell_type_menu.cell = 0;
  }
}


void
perform_cells_sim_tick(Memory *memory, GameState *game_state, QuadTree *tree, u64 time_us)
{
  if (game_state->sim_steps == 0)
  {
    if (tree)
    {
      for (u32 cell_index = 0;
           cell_index < tree->used;
           ++cell_index)
      {
        Cell *cell = tree->cells + cell_index;

        if (cell->type == CELL_START)
        {
          Car *new_car = get_new_car(memory, &game_state->cars);
          init_car(game_state, time_us, new_car, cell->x, cell->y);
        }
      }

      perform_cells_sim_tick(memory, game_state, tree->top_right, time_us);
      perform_cells_sim_tick(memory, game_state, tree->top_left, time_us);
      perform_cells_sim_tick(memory, game_state, tree->bottom_right, time_us);
      perform_cells_sim_tick(memory, game_state, tree->bottom_left, time_us);
    }
  }
}
