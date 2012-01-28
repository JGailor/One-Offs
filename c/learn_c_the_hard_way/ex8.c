#include <stdio.h>

int main(int argc, char* argv[]) 
{
  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Jeremy";
  char full_name[] = {'j', 'e', 'r', 'e', 'm', 'y', ' ', 'J', '.', ' ', 'G', 'a', 'i', 'l', 'o', 'r', '\0'};

  full_name[0] = 'J';

  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]): %ld\n", sizeof(areas));
  printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
  printf("The first area is %d, then 2nd %d.\n", areas[0], areas[1]);
  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n", sizeof(name));
  printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
  printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
  printf("The full name is %s\n", full_name);
  printf("name = \"%s\" and full_name = \"%s\"\n", name, full_name);

  return 0;
}
