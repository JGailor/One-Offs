#include <stdio.h>
#include <stdlib.h>

struct point {
  int x, y, z;
};

void print_point(struct point *p) {
  printf("(%d, %d)\n", p->x, p->y);
}

void save_point(struct point *p, FILE *fp) {
  fwrite(p, sizeof(struct point), 1, fp);
}

void read_point(struct point *p, FILE *fp) {
  fread(p, sizeof(struct point), 1, fp);
}

int main(int argc, char** argv) {
  struct point a = {.x = 1, .y = 1};
  struct point *b = malloc(sizeof(struct point));;

  FILE *fp = fopen("ex3_db", "w+");

  print_point(&a);
  save_point(&a, fp);
  rewind(fp);
  read_point(b, fp);
  print_point(b);

  fclose(fp);
  
  return 0;
}
