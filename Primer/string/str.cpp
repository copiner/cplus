#include<iostream>
#include<string>

using namespace std;

int main(){
  string r1;
  const char *pr = "a character array";
  r1 = pr;

  cout<<"r1: "<<r1<<endl;
  //  char *str = r1;//error

  const char *str = r1.c_str();
  cout<<"str: "<<str<<endl;
}
