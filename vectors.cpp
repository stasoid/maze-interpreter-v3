bool
operator==(V2 a, V2 b)
{
  bool result = ((a.x == b.x) &&
                 (a.y == b.y));
  return result;
}
bool
operator!=(V2 a, V2 b)
{
  bool result = !(a == b);
  return result;
}

bool
operator>(V2 a, V2 b)
{
  bool result = ((a.x > b.x) &&
                 (a.y > b.y));
  return result;
}
bool
operator<(V2 a, V2 b)
{
  bool result = ((a.x < b.x) &&
                 (a.y < b.y));
  return result;
}

bool
operator>=(V2 a, V2 b)
{
  bool result = ((a.x >= b.x) &&
                 (a.y >= b.y));
  return result;
}
bool
operator<=(V2 a, V2 b)
{
  bool result = ((a.x <= b.x) &&
                 (a.y <= b.y));
  return result;
}

V2
operator*(float c, V2 vec)
{
  V2 result;
  result.x = c * vec.x;
  result.y = c * vec.y;
  return result;
}
V2
operator*(V2 vec, float c)
{
  V2 result = c * vec;
  return result;
}
V2 &
operator*=(V2 & vec, float c)
{
  vec = c * vec;
  return vec;
}

V2
operator/(float c, V2 vec)
{
  V2 result;
  result.x = c / vec.x;
  result.y = c / vec.y;
  return result;
}
V2
operator/(V2 vec, float c)
{
  V2 result;
  result.x = vec.x / c;
  result.y = vec.y / c;
  return result;
}
V2 &
operator/=(V2 & vec, float c)
{
  vec = vec / c;
  return vec;
}

V2
operator+(float c, V2 vec)
{
  V2 result;
  result.x = c + vec.x;
  result.y = c + vec.y;
  return result;
}
V2
operator+(V2 vec, float c)
{
  V2 result = c + vec;
  return result;
}
V2 &
operator+=(V2 & vec, float c)
{
  vec = c + vec;
  return vec;
}

V2
operator+(V2 a, V2 b)
{
  V2 result;
  result.x = a.x + b.x;
  result.y = a.y + b.y;
  return result;
}
V2 &
operator+=(V2 & a, V2 b)
{
  a = a + b;
  return a;
}

V2
operator-(V2 vec)
{
  V2 result;
  result.x = -vec.x;
  result.y = -vec.y;
  return result;
}

V2
operator-(float c, V2 vec)
{
  V2 result;
  result.x = c - vec.x;
  result.y = c - vec.y;
  return result;
}
V2
operator-(V2 vec, float c)
{
  V2 result;
  result.x = vec.x - c;
  result.y = vec.y - c;
  return result;
}
V2 &
operator-=(V2 & vec, float c)
{
  vec = vec - c;
  return vec;
}

V2
operator-(V2 a, V2 b)
{
  V2 result;
  result.x = a.x - b.x;
  result.y = a.y - b.y;
  return result;
}
V2 &
operator-=(V2 & a, V2 b)
{
  a = a - b;
  return a;
}

V2
min_V2(V2 a, V2 b)
{
  V2 result;
  result.x = fmin(a.x, b.x);
  result.y = fmin(a.y, b.y);
  return result;
}

V2
max_V2(V2 a, V2 b)
{
  V2 result;
  result.x = fmax(a.x, b.x);
  result.y = fmax(a.y, b.y);
  return result;
}

V2
round_down(V2 vec)
{
  V2 result;
  result.x = (int32_t)vec.x;
  result.y = (int32_t)vec.y;
  return result;
}

float
length_sq(V2 vec)
{
  float result = (vec.x * vec.x) + (vec.y * vec.y);
  return result;
}


bool
operator==(Rectangle a, Rectangle b)
{
  bool result = ((a.start == b.start) &&
                 (a.end == b.end));
  return result;
}
bool
operator!=(Rectangle a, Rectangle b)
{
  bool result = !(a == b);
  return result;
}
Rectangle
operator*(float c, Rectangle rect)
{
  Rectangle result;
  result.start = c * rect.start;
  result.end = c * rect.end;
  return result;
}
Rectangle
operator*(Rectangle rect, float c)
{
  Rectangle result = c * rect;
  return result;
}
Rectangle &
operator*=(Rectangle & rect, float c)
{
  rect = c * rect;
  return rect;
}

Rectangle
operator/(float c, Rectangle rect)
{
  Rectangle result;
  result.start = c / rect.start;
  result.end = c / rect.end;
  return result;
}
Rectangle
operator/(Rectangle rect, float c)
{
  Rectangle result;
  result.start = rect.start / c;
  result.end = rect.end / c;
  return result;
}
Rectangle &
operator/=(Rectangle & rect, float c)
{
  rect = rect / c;
  return rect;
}

Rectangle
operator+(float c, Rectangle rect)
{
  Rectangle result;
  result.start = c + rect.start;
  result.end = c + rect.end;
  return result;
}
Rectangle
operator+(Rectangle rect, float c)
{
  Rectangle result = c + rect;
  return result;
}
Rectangle &
operator+=(Rectangle & rect, float c)
{
  rect = rect + c;
  return rect;
}

Rectangle
operator+(Rectangle rect, V2 vec)
{
  Rectangle result;
  result.start = rect.start + vec;
  result.end = rect.end + vec;
  return result;
}
Rectangle
operator+(V2 vec, Rectangle rect)
{
  Rectangle result = rect + vec;
  return result;
}
Rectangle &
operator+=(Rectangle & rect, V2 vec)
{
  rect = rect + vec;
  return rect;
}

Rectangle
operator+(Rectangle a, Rectangle b)
{
  Rectangle result;
  result.start = a.start + b.start;
  result.end = a.end + b.end;
  return result;
}
Rectangle &
operator+=(Rectangle & a, Rectangle b)
{
  a = a + b;
  return a;
}

Rectangle
operator-(Rectangle rect)
{
  Rectangle result;
  result.start = -rect.start;
  result.end = -rect.end;
  return result;
}

Rectangle
operator-(float c, Rectangle rect)
{
  Rectangle result;
  result.start = c - rect.start;
  result.end = c - rect.end;
  return result;
}
Rectangle
operator-(Rectangle rect, float c)
{
  Rectangle result;
  result.start = rect.start - c;
  result.end = rect.end - c;
  return result;
}
Rectangle &
operator-=(Rectangle & rect, float c)
{
  rect = rect - c;
  return rect;
}

Rectangle
operator-(Rectangle a, Rectangle b)
{
  Rectangle result;
  result.start = a.start - b.start;
  result.end = a.end - b.end;
  return result;
}
Rectangle &
operator-=(Rectangle & a, Rectangle b)
{
  a = a - b;
  return a;
}

Rectangle
rectangle(V2 start, V2 size)
{
  Rectangle result;
  result.start = start;
  result.end = result.start + size;
  return result;
}

Rectangle
rectangle(V2 center, float radius)
{
  Rectangle result;
  result.start = center - radius;
  result.end = center + radius;
  return result;
}

Rectangle
round_down(Rectangle rect)
{
  Rectangle result;
  result.start = round_down(rect.start);
  result.end = round_down(rect.end);
  return result;
}

bool
in_rectangle(V2 test, Rectangle rect)
{
  bool result = ((test.x >= rect.start.x) &&
                 (test.x < rect.end.x) &&
                 (test.y >= rect.start.y) &&
                 (test.y < rect.end.y));
  return result;
}

bool
overlaps(Rectangle a, Rectangle b)
{
  bool result = !((b.end.x < a.start.x) ||
                  (b.start.x > a.end.x) ||
                  (b.end.y < a.start.y) ||
                  (b.start.y > a.end.y));
  return result;
}

Rectangle
crop_to(Rectangle rect, Rectangle bound)
{
  Rectangle result;
  result.start = max_V2(rect.start, bound.start);
  result.end   = min_V2(rect.end,   bound.end);
  return result;
}

Rectangle
get_overlap(Rectangle a, Rectangle b)
{
  Rectangle result = crop_to(a, b);
  return result;
}

V2
get_center(Rectangle rect)
{
  V2 result = rect.start + ((rect.end - rect.start) / 2);
  return result;
}

Rectangle
get_top_left(Rectangle rect)
{
  Rectangle result;
  V2 center = get_center(rect);
  result.start = (V2){rect.start.x, center.y};
  result.end   = (V2){center.x, rect.end.y};
  return result;
}

Rectangle
get_top_right(Rectangle rect)
{
  Rectangle result;
  V2 center = get_center(rect);
  result.start = center;
  result.end   = rect.end;
  return result;
}

Rectangle
get_bottom_right(Rectangle rect)
{
  Rectangle result;
  V2 center = get_center(rect);
  result.start = (V2){center.x, rect.start.y};
  result.end   = (V2){rect.end.x, center.y};
  return result;
}

Rectangle
get_bottom_left(Rectangle rect)
{
  Rectangle result;
  V2 center = get_center(rect);
  result.start = rect.start;
  result.end   = center;
  return result;
}


bool
operator==(V3 a, V3 b)
{
  bool result = ((a.x == b.x) &&
                 (a.y == b.y) &&
                 (a.z == b.z));
  return result;
}
bool
operator!=(V3 a, V3 b)
{
  bool result = !(a == b);
  return result;
}
V3
operator*(float c, V3 vec)
{
  V3 result;
  result.x = c * vec.x;
  result.y = c * vec.y;
  result.z = c * vec.z;
  return result;
}
V3
operator*(V3 vec, float c)
{
  V3 result = c * vec;
  return result;
}
V3 &
operator*=(V3 & vec, float c)
{
  vec = c * vec;
  return vec;
}

V3
operator/(float c, V3 vec)
{
  V3 result;
  result.x = c / vec.x;
  result.y = c / vec.y;
  result.z = c / vec.z;
  return result;
}
V3
operator/(V3 vec, float c)
{
  V3 result;
  result.x = vec.x / c;
  result.y = vec.y / c;
  result.z = vec.z / c;
  return result;
}
V3 &
operator/=(V3 & vec, float c)
{
  vec = vec / c;
  return vec;
}

V3
operator+(float c, V3 vec)
{
  V3 result;
  result.x = c + vec.x;
  result.y = c + vec.y;
  result.z = c + vec.z;
  return result;
}
V3
operator+(V3 vec, float c)
{
  V3 result = c + vec;
  return result;
}
V3 &
operator+=(V3 & vec, float c)
{
  vec = c + vec;
  return vec;
}

V3
operator+(V3 a, V3 b)
{
  V3 result;
  result.x = a.x + b.x;
  result.y = a.y + b.y;
  result.z = a.z + b.z;
  return result;
}
V3 &
operator+=(V3 & a, V3 b)
{
  a = a + b;
  return a;
}

V3
operator-(V3 vec)
{
  V3 result;
  result.x = -vec.x;
  result.y = -vec.y;
  result.z = -vec.z;
  return result;
}

V3
operator-(float c, V3 vec)
{
  V3 result;
  result.x = c - vec.x;
  result.y = c - vec.y;
  result.z = c - vec.z;
  return result;
}
V3
operator-(V3 vec, float c)
{
  V3 result;
  result.x = vec.x - c;
  result.y = vec.y - c;
  result.z = vec.z - c;
  return result;
}
V3 &
operator-=(V3 & vec, float c)
{
  vec = vec - c;
  return vec;
}

V3
operator-(V3 a, V3 b)
{
  V3 result;
  result.x = a.x - b.x;
  result.y = a.y - b.y;
  result.z = a.z - b.z;
  return result;
}
V3 &
operator-=(V3 & a, V3 b)
{
  a = a - b;
  return a;
}

V3
min_V3(V3 a, V3 b)
{
  V3 result;
  result.x = fmin(a.x, b.x);
  result.y = fmin(a.y, b.y);
  result.z = fmin(a.z, b.z);
  return result;
}

V3
max_V3(V3 a, V3 b)
{
  V3 result;
  result.x = fmax(a.x, b.x);
  result.y = fmax(a.y, b.y);
  result.z = fmax(a.z, b.z);
  return result;
}

V3
round_down(V3 vec)
{
  V3 result;
  result.x = (int32_t)vec.x;
  result.y = (int32_t)vec.y;
  result.z = (int32_t)vec.z;
  return result;
}

bool
operator==(V4 a, V4 b)
{
  bool result = ((a.w == b.w) &&
                 (a.x == b.x) &&
                 (a.y == b.y) &&
                 (a.z == b.z));
  return result;
}
bool
operator!=(V4 a, V4 b)
{
  bool result = !(a == b);
  return result;
}
V4
operator*(float c, V4 vec)
{
  V4 result;
  result.w = c * vec.w;
  result.x = c * vec.x;
  result.y = c * vec.y;
  result.z = c * vec.z;
  return result;
}
V4
operator*(V4 vec, float c)
{
  V4 result = c * vec;
  return result;
}
V4 &
operator*=(V4 & vec, float c)
{
  vec = c * vec;
  return vec;
}

V4
operator/(float c, V4 vec)
{
  V4 result;
  result.w = c / vec.w;
  result.x = c / vec.x;
  result.y = c / vec.y;
  result.z = c / vec.z;
  return result;
}
V4
operator/(V4 vec, float c)
{
  V4 result;
  result.w = vec.w / c;
  result.x = vec.x / c;
  result.y = vec.y / c;
  result.z = vec.z / c;
  return result;
}
V4 &
operator/=(V4 & vec, float c)
{
  vec = vec / c;
  return vec;
}

V4
operator+(float c, V4 vec)
{
  V4 result;
  result.w = c + vec.w;
  result.x = c + vec.x;
  result.y = c + vec.y;
  result.z = c + vec.z;
  return result;
}
V4
operator+(V4 vec, float c)
{
  V4 result = c + vec;
  return result;
}
V4 &
operator+=(V4 & vec, float c)
{
  vec = c + vec;
  return vec;
}

V4
operator+(V4 a, V4 b)
{
  V4 result;
  result.w = a.w + b.w;
  result.x = a.x + b.x;
  result.y = a.y + b.y;
  result.z = a.z + b.z;
  return result;
}
V4 &
operator+=(V4 & a, V4 b)
{
  a = a + b;
  return a;
}

V4
operator-(V4 vec)
{
  V4 result;
  result.w = -vec.w;
  result.x = -vec.x;
  result.y = -vec.y;
  result.z = -vec.z;
  return result;
}

V4
operator-(float c, V4 vec)
{
  V4 result;
  result.w = c - vec.w;
  result.x = c - vec.x;
  result.y = c - vec.y;
  result.z = c - vec.z;
  return result;
}
V4
operator-(V4 vec, float c)
{
  V4 result;
  result.w = vec.w - c;
  result.x = vec.x - c;
  result.y = vec.y - c;
  result.z = vec.z - c;
  return result;
}
V4 &
operator-=(V4 & vec, float c)
{
  vec = vec - c;
  return vec;
}

V4
operator-(V4 a, V4 b)
{
  V4 result;
  result.w = a.w - b.w;
  result.x = a.x - b.x;
  result.y = a.y - b.y;
  result.z = a.z - b.z;
  return result;
}
V4 &
operator-=(V4 & a, V4 b)
{
  a = a - b;
  return a;
}

V4
min_V4(V4 a, V4 b)
{
  V4 result;
  result.w = fmin(a.w, b.w);
  result.x = fmin(a.x, b.x);
  result.y = fmin(a.y, b.y);
  result.z = fmin(a.z, b.z);
  return result;
}

V4
max_V4(V4 a, V4 b)
{
  V4 result;
  result.w = fmax(a.w, b.w);
  result.x = fmax(a.x, b.x);
  result.y = fmax(a.y, b.y);
  result.z = fmax(a.z, b.z);
  return result;
}

V4
round_down(V4 vec)
{
  V4 result;
  result.w = (int32_t)vec.w;
  result.x = (int32_t)vec.x;
  result.y = (int32_t)vec.y;
  result.z = (int32_t)vec.z;
  return result;
}


V3
remove_alpha(V4 vec)
{
  V3 result;
  result.r = vec.r;
  result.g = vec.g;
  result.b = vec.b;
  return result;
}


V3
pixel_color_to_V3(PixelColor color)
{
  V3 result;
  result.r = color.r;
  result.g = color.g;
  result.b = color.b;
  return result;
}


PixelColor
to_color(V3 vec)
{
  PixelColor result;
  result.r = vec.r;
  result.g = vec.g;
  result.b = vec.b;
  return result;
}


Direction
reverse(Direction d)
{
  Direction result;

  switch (d)
  {
    case UP:
    {
      result = DOWN;
    } break;

    case DOWN:
    {
      result = UP;
    } break;

    case LEFT:
    {
      result = RIGHT;
    } break;

    case RIGHT:
    {
      result = LEFT;
    } break;

    default:
    {
      result = STATIONARY;
    } break;
  }

  return result;
}


void
printV(V4 vec)
{
  printf("(%f, %f, %f, %f)\n", vec.w, vec.x, vec.y, vec.z);
}

void
printV(V2 vec)
{
  printf("(%f, %f)\n", vec.x, vec.y);
}

void
printV(V3 vec)
{
  printf("(%f, %f, %f)\n", vec.x, vec.y, vec.z);
}

void
printR(Rectangle rect)
{
  printf("((%f, %f), (%f, %f))\n", rect.start.x, rect.start.y, rect.end.x, rect.end.y);
}