
#include <stdio.h>
#include <string.h>

#define FIRST_NAME_LEN 20
#define LAST_NAME_LEN 20

struct person_name{
  char first[FIRST_NAME_LEN+1];
  char middle_initial;
  char last[LAST_NAME_LEN];
};

struct student{
  struct person_name name;
  int age;
  char sex;
};

int main()
{
  struct student student1, student2;
  strcpy(student1.name.first,"Fred");

  printf("first: %s\n",student1.name.first);

  return 0;
}
