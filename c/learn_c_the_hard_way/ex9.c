#include <stdio.h>

int main(int argc, char **argv)
{
  int numbers[4] = {'z', 'y', 'x', 'w'};
  char *name = "a    ";

  char four_byte[4] = {'a','b','c','d'};

  printf("four_byte: %d\n", (four_byte[0] + four_byte[1] + four_byte[2] + four_byte[3]));

  // First, print them out raw
  printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  printf("name: %s\n", name);

  printf("Starting to change\n");

  // Setup the numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  printf("Change the name\n");

  // Setup the name
  name[0] = 'j';
  printf("A\n");
  name[1] = 'j';
  name[2] = 'g';
  name[3] = 'x';

  // Print them out initialized
  printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  // Print the name like a string
  printf("name: %s\n", name);

  // Another way to use name
  char *another = "JJG";

  printf("another: %s\n", another);

  printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

  return 0;
}
