#include <stdio.h>
#include <stdlib.h>

struct named_point {
  char *name;
  int x, y;
};

void print_point(struct named_point *np) {
  printf("%s (%d, %d)\n", np->name, np->x, np->y);
}

void save_point(struct named_point *np, FILE *fp) {
  fwrite(np, sizeof(struct named_point), 1, fp);
}

void load_point(struct named_point *np, FILE *fp) {
  fread(np, sizeof(struct named_point), 1, fp);
}

int main(int argc, char** argv) {
  struct named_point a = {.name = "Johnny ApplePoint", .x = 10, .y = 10};
  struct named_point b;

  FILE *fp = fopen("ex4_db", "w+");

  print_point(&a);
  save_point(&a, fp);
  rewind(fp);
  load_point(&b, fp);
  print_point(&b);

  return 0;
}
