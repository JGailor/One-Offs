#include <stdio.h>
#include <stdlib.h>

struct point {
  int x,y;
};

struct point_set {
  int size;
  struct point *points;
};

struct point_set * create_point_set(int size) {
  struct point_set *ps = malloc(sizeof(struct point_set));
  ps->size = size;
  ps->points = malloc(sizeof(struct point) * size);
  return ps;
}

void destroy_point_set(struct point_set *ps) {
  free(ps->points);
  free(ps);
}

void store_point_set(struct point_set *ps, FILE * fp) {
  fwrite(ps, sizeof(struct point_set), 1, fp);
}

void read_point_set(struct point_set *ps, FILE * fp) {
  fread(ps, sizeof(struct point_set), 1, fp);
}

void print_point(struct point *p) {
  printf("(%d,%d)\n", p->x, p->y);
}

void print_point_set(struct point_set *ps) {
  printf("Point Set (%d items):\n", ps->size);

  int i = 0;
  for(; i < ps->size; i++) {
    print_point(ps->points + i);
  }
}

int main(int argc, char** argv) {
  if(argc != 2) {
    printf("Usage: ex5 size\n");
    exit(-1);
  }

  int size = atoi(argv[1]);

  printf("The size is %d\n", size);

  FILE *fp = fopen("ex5_db", "w+");

  struct point_set *ps = create_point_set(size);
  struct point_set ps2;

  int i;
  for(i = 0; i < size; i++) {
    ps->points[i].x = i * i;
    ps->points[i].y = i + 2;
  }

  //print_point_set(ps);
  store_point_set(ps, fp);
  rewind(fp);
  read_point_set(&ps2, fp);
  //print_point_set(&ps2);
  destroy_point_set(ps);

  return 1;
}
