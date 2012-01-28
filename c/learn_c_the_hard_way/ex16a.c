#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

void Person_destroy(struct Person *who)
{
  assert(who != NULL);

  free(who-> name);
  free(who);
}

void Person_print(struct Person *who)
{
  printf("who is at memory location %p:\n", who);

	printf("Name: %s\n", who->name);
  printf("Age: %d\n", who->age);
  printf("Weight: %d\n", who->weight);
  printf("Height: %d\n", who->height);
}

int main(int argc, char** argv)
{
  // Make two people structures
  struct Person joe = {.name = "Joe Alex", .age = 32, .height = 64, .weight = 140};
  struct Person frank = {.name = "Frank Blank", .age = 20, .height = 72, .weight = 180};

  // Print them out and where they are in memory
  printf("Joe is at memory location %p:\n", &joe);
  Person_print(&joe);

  printf("Frank is at memory location %p:\n", &frank);
  Person_print(&frank);

  // Make everyone age 20 year and print them again
  joe.age += 20;
  joe.height -= 2;
  joe.weight += 40;

  frank.age += 20;
  frank.weight += 20;

  printf("Joe is at memory location %p:\n", &joe);
  Person_print(&joe);

  printf("Frank is at memory location %p:\n", &frank);
  Person_print(&frank);

  return 0;
}
