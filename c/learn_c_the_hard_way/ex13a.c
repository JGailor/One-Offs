#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc != 2) {
    printf("ERROR: You must provide one argument.\n");
    return 1;
  }

  int delta = 'a' - 'A';
  int i = 0;
  for(i = 0; argv[1][i] != '\0'; i++) {
    char c = argv[1][i];
    if(c < 'a') {
      c = c + delta;
    }

    printf("lowercased %c = %c\n", argv[1][i], c);
  }

  return 0;
}
