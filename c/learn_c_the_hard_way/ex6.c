#include <stdio.h>

int main(int argc, char *argv[]) 
{
  int distance = 0x64;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'J';
  char first_name[] = "Jeremy";
  char last_name[] = "Gailor";
  char blank[] = "";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("I have an initial %c.\n", initial);
  printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);
  printf("There is nothing here \"%s\"\n", blank);

  return 0;
}
