#include <iostream>

void changeAge(int age, int newAge);

int main()
{
  int age = 24;
  std::cout << "my age is: " << age <<"\n";

  changeAge(age, age + 1);

  std::cout << "now my age is: "<<age<<"\n";
}

void changeAge(int age, int newAge)
{
  age = newAge;
  std::cout<<"at change age : "<<age<<"\n";
}
