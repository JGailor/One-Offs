#include <stdio.h>
#include <stdlib.h>

void name_a(const char *name) {
  printf("%s\n", name);
}

void name_b(const char *name) {
  printf("%s is a fucking stupid name\n", name);
}

typedef void (*namer)(const char *name);

void print_name(namer nf, const char *name) {
  nf(name);
}

int main(int argc, char **argv) {
  print_name(name_a, "Tom");
  print_name(name_b, "Harry");

  return 0;
}
