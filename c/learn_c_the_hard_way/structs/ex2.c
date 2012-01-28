#include <stdlib.h>
#include <stdio.h>

struct list {
  int size;
  int* items;
};

void init_list(struct list *l, int size) {
  l->size = size;
  l->items = malloc(sizeof(int) * size);
}

void print_list(struct list *l) {
  printf("List: %d items:\n", l->size);
  int i;
  for(i = 0; i < l->size; i++) {
    printf("Element %d = %d\n", i, l->items[i]);
  }
}

int main(int argc, char** argv) {
  struct list l;

  init_list(&l, 10);

  int i = 0;
  for(i = 0; i < 10; i++) {
    l.items[i] = i + 1;
  }

  print_list(&l);

  return 1;
}
