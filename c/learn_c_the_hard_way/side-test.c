#include <stdio.h>

int main() {
  char* name = "ABC";

  printf("name: %s\n", name);
  
  printf("name[0]: %c\n", name[0]);

  name[1] = 'a';

  printf("name: %s\n", name);

  return 0;
}
