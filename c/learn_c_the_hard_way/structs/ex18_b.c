#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void show_tokens(const char *test) {
  char *word;
  int len = strlen(test);
  
  char *target = malloc(len * sizeof(char));
  
  strncpy(target, test, len);

  for(word = strtok(target, " "); word; word = strtok(NULL, " ")) {
    printf("Found: %s\n", word);
  }
}

int main(int argc, char **argv) {
  show_tokens("The man in the chair is drunk.");

  return 0;
}
