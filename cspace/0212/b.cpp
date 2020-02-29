
#include <iostream>

class Student
{
  int n;
  std::string name;

public:
  void set(std::string str)
  {
    static int number = 0;
    name = str;
    n = ++number;
  }
  void print()
  {
    std::cout<<name<<" students are "<<n<<" numbers\n";
  }
};

void fn()
{
  Student s1;
  s1.set("Jenny");
  
  Student s2;
  s2.set("Randy");

  s1.print();
}

int main()
{
  Student s;
  s.set("Smith");
  //fn();
  {
    Student s1;
    s1.set("Jenny");
  
    Student s2;
    s2.set("Randy");

    s1.print();
  }

  s.print();

  return 0;
}
