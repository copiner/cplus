#include <iostream>
#include <cstdlib>

class Rational
{
public:
  Rational(int num, int denom);

  Rational operator+(Rational rhs);//right hand side
  Rational operator-(Rational rhs);
  Rational operator*(Rational rhs);
  Rational operator/(Rational rhs);

  void print();
private:
  void normalize();

  int numerator;
  int denominator;
};

Rational::Rational(int num, int denom)
{
  numerator = num;
  denominator = denom;

  normalize();
};

/*
  1.只允许分子为负数，如果分母为负数，则挪到分子部分
  2.利用欧几里德算法 ，将分数进行简化：2/10 = 1/5
*/
void Rational::normalize()
{
  if(denominator<0){
    numerator = -numerator;
    denominator = -denominator;
  }

  int a = abs(numerator);
  int b = abs(denominator);

  while(b>0){
    int t = a%b;
    a = b;
    b = t;
  }

  numerator /= a;
  denominator /= a;
};

/*
a   c   a*d   c*b   a*d + c*b
- + - = --- + --- = --------
b   d   b*d   b*d     b*d
*/
Rational Rational::operator+(Rational rhs)
{
  int a = numerator;
  int b = denominator;
  int c = rhs.numerator;
  int d = rhs.denominator;

  int e = a*b + c*d;
  int f = b*d;

  return Rational(e, f);
}

/*
a   c   a   -c
- - - = - +  -
b   d   b    d
*/


Rational Rational::operator-(Rational rhs)
{
  rhs.numerator = - rhs.numerator;

  return operator+(rhs);
}

/*
a   c   a*c 
- * - = --- 
b   d   b*d 
*/

Rational Rational::operator*(Rational rhs)
{
  int a = numerator;
  int b = denominator;

  int c = rhs.numerator;
  int d = rhs.denominator;
  
  int e = a*c;
  int f = b*d;

  return Rational(e,f);
}


/*
a   c   a   d
- / - = - * - 
b   d   b   c
*/

Rational Rational::operator/(Rational rhs)
{
  int t = rhs.numerator;
  rhs.numerator = rhs.denominator;
  rhs.denominator = t;

  return operator*(rhs);
}
void Rational::print()
{
  if(numerator % denominator == 0){

    std::cout<<numerator / denominator<<"\n";

  } else {
    
    std::cout<<numerator<<"/"<< denominator<<"\n";
  }
};

int main()
{
  Rational f1(2,16);
  Rational f2(7,8);

  Rational res = f1 + f2;

  res.print();

  res = f1 - f2;

  res.print();

  res = f1*f2;

  res.print();

  res = f1/f2;
  
  res.print();

  return 0;
}