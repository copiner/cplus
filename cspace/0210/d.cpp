/*
this  inheritance
public protected private
overriding
overload
*/

#include <iostream>
#include <string>

class Animal
{
public:
  std::string mouth;

  void eat(std::string w);
  void sleep(std::string w);
  void drool(std::string w);

};


class Pig : public Animal
{
public:
  std::string name;

  Pig(std::string w);
  
  void climb(std::string w);
};

class Turtle : public Animal
{
public:
  std::string name;
  
  Turtle(std::string w);

  void swim(std::string w);
};


Pig::Pig(std::string w)
{
  name = w;
}

Turtle::Turtle(std::string w)
{
  name = w;
}

void Animal::eat(std::string w)
{
  std::cout<<name<<" eating..."<<w<<"\n"<<std::endl;
}

void Animal::sleep(std::string w)
{
  std::cout<<name<<" sleeping..."<<w<<"\n"<<std::endl;
}

void Animal::drool(std::string w)
{
  std::cout<<name<<" drooling..."<<w<<"\n"<<std::endl;
}

void Pig::climb(std::string w)
{
  std::cout<<name<<" climbing..."<<w<<"\n"<<std::endl;
}

void Turtle::swim(std::string w)
{
  std::cout<<name<<" swiming..."<<w<<"\n"<<std::endl;
}

int main()
{
  Pig p("pig");
  Turtle t("Turtle");
  
  p.eat("grass");
  p.climb("tree");

  t.eat("water");
  t.swim("freedom");

  return 0;
}
