#include <stdio.h>

int main(int argc, char** argv)
{
  FILE* file = fopen("./test.ex1", "w");

  int i = 0;
  for(i = 0; i < argc; i++) {
    fputs("Writing Output:", file);
    fprintf(file, "%d: '%s'\n", i, argv[i]);
  }
  return 0;
}
