#include <iostream>
#include <math.h>

using namespace std;

int main(){
  double result = sqrt(3.0);

  cout << "sqrt 3 precision 0 ~ 9: \n" << endl;

  for( int i=0; i<=9; i++){

    cout.precision(i);
    cout << result << endl;
  }

  cout << "current precisions is: " << cout.precision() << endl;

  return 0;			   
			   
}
