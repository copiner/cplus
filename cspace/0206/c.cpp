#include <iostream>
#include <string>

int main()
{
  int a = 456;
  char b = 'b';
  float c = 3.14;
  unsigned long d = 201902026;
  std::string e = "beauty";

  
  int *ap = &a;
  char *bp = &b;
  float *cp = &c;
  unsigned long *dp = &d;
  std::string *ep = &e;


  std::cout << "ap: "<<ap<<"\n"
	    << "bp: "<<bp<<"\n\n"
	    << "cp: "<<cp<<"\n"
	    << "dp: "<<dp<<"\n"
	    << "ep:"<<ep<<"\n"<<std::endl;

  std::cout << "*ap: "<<*ap<<"\n"
	    << "*bp: "<<*bp<<"\n\n"
	    << "*cp: "<<*cp<<"\n"
	    << "*dp: "<<*dp<<"\n"
	    << "*ep:"<<*ep<<"\n"<<std::endl;

  return 0;
}
