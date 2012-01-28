#include <stdio.h>

struct point {
  int x, y;
};

void print_point(struct point *p) {
  printf("(%d, %d)\n", p->x, p->y);
}

int main(int argc, char** argv) {
  struct point a = {.x = 10, .y = 20};
  struct point b = {.x = 15, .y = 30};

  print_point(&a);
  print_point(&b);

  return 0;
}
