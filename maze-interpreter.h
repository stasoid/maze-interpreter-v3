// NOTE: 256 sub-pixel steps!
const u32 MIN_WORLD_PER_PIXEL = 256;
const u32 MAX_WORLD_PER_PIXEL = 65536;

const r32 MIN_ZOOM = 10;
const r32 MAX_ZOOM = 200;

// const char MAZE_FILENAME[] = "programs/test-huge.mz";
// const char MAZE_FILENAME[] = "programs/test-big.mz";
// const char MAZE_FILENAME[] = "programs/tree-big.mz";
// const char MAZE_FILENAME[] = "programs/non-square.mz";
const char MAZE_FILENAME[] = "test.mz";


struct Input
{
  b32 step;
  b32 step_mode_toggle;
};


struct GameState
{
  b32 init;

  u32 world_per_pixel;
  r32 d_zoom;
  r32 zoom;
  r32 scale;
  V2 scale_focus;

  // NOTE: Things are scaled relatively to cell_spacing.
  u32 cell_spacing;
  r32 cell_margin;

  V2 maze_pos;
  V2 last_mouse_pos;

  b32 single_step;

  Input input;

  Maze maze;

  Cars cars;
  u64 last_car_update;

  u32 frame_count;
};