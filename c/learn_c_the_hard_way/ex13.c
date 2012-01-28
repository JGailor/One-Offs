#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc < 2) {
    printf("ERROR: You need one argument.\n");
    return 1;
  }

  int delta = 'a' - 'A';
  int i = 0;
  int j = 0;
  for(j = 1; j < argc; j++) {
    for(i = 0; argv[j][i] != '\0'; i++) {
      char letter = argv[j][i];
      if(letter < 'a') {
        letter = letter + delta;
      }

      switch(letter) {
        case 'a':
          printf("%d: 'A'\n", i);
          break;
        case 'e':
          printf("%d: 'E'\n", i);
          break;
        case 'i':
          printf("%d: 'I'\n", i);
          break;
        case 'o':
          printf("%d: 'O'\n", i);
          break;
        case 'u':
          printf("%d: 'U'\n", i);
          break;
        case 'y':
          if(i % 2 != 0) {
            // it's only sometimes Y
            printf("%d: 'Y'\n", i);
          }
          break;
        default:
          printf("%d: %c is not a vowel.\n", i, letter);
      }
    }
  }

  return 0;
}
