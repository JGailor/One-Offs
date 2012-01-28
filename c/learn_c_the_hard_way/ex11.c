#include <stdio.h>

int main(int argc, char *argv[])
{
  // Go through each string in argv
  int i = argc;
  while(i > 0)
  {
    printf("arg %d: %s\n", i - 1, argv[i - 1]);
    i--;
  }

  // Let's make our own array of strings
  char *states[argc];
  int num_states = argc;
  i = 0;
  while(i < argc)
  {
    states[i] = argv[i];
    i++;
  }

  argv[2] = "HAM AND EGGS Y'ALL";

  i = 0;
  while(i < num_states)
  {
    printf("state: %d: %s\n", i, states[i]);
    i++;
  }

  return 0;
}
