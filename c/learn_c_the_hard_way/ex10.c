#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  // Go through each string in argv
  // skipping the first arg because
  // it refers to the name of the program
  for(i = 0; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // Let's make our own array of strings
  char *states[] = {"California", argv[2], "Oregon", "Washington", "Texas"};

  int num_states = 5;
  int meter = 0;

  for(i = 0; i < num_states; i++, meter = (meter + 1) * 10) {
    printf("state %d: %s\n", i, states[i]);
  }

  printf("The meter is @ %d\n", meter);
  return 0;
}
