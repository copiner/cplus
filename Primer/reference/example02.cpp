#include<iostream>
using namespace std;

double &max(double &d1,double &d2){
  return d1>d2?d1:d2;
}

int main(){
  double temp = max(124.56,890.123) += 1.0;

  cout<<"temp: "<<temp<<endl;
  return 0;
}
