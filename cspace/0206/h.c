/*
  structure
*/

#include <stdio.h>

#define NAME_LEN 25

struct {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
} part1 = {529,"ayl",6};

int main()
{
  printf("number: %d\n",part1.number);
  printf("name: %s\n",part1.name);
  printf("on hand: %d\n",part1.on_hand);

  return 0;
}
