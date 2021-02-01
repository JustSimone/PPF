//#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
//#include "doctest.h"
#include <iostream>
#include <cmath>

struct comp{
    double r; // real part
    double i; // immaginary part
};

struct sol{
    comp x1;
    comp x2;
};

// ax2 + bx + c =0
// let a, b, c have arbitrary values

void solve(double a, double b, double c)
{
    if((b*b)-(4*a*c)>=0)
    {
        comp x1_;
        comp x2_;
        x1_.r=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
        x2_.r=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
        sol solution;
        solution.x1 = x1_;
        solution.x2 = x2_;
        std::cout<<solution.x1.r<<'\n'<<solution.x2.r;
    }
    else
    {
        comp c1;
        comp c2;
        c1.i=-sqrt(-((b*b)-(4*a*c)))/(2*a);
        c1.r=-b/(2*a);
        c2.i=sqrt(-((b*b)-(4*a*c)))/(2*a);
        c2.r=-b/(2*a);

        sol solution;
        solution.x1 = c1;
        solution.x2 = c2;

        if (c1.i<0&&c2.i>0)
        std::cout<<solution.x1.r<<solution.x1.i<<'i'<<'\n'<<solution.x2.r<<'+'<<solution.x2.i<<'i'<<'\n';
        else if (c1.i<0 && c1.i<0)
        std::cout<<solution.x1.r<<solution.x1.i<<'i'<<'\n'<<solution.x2.r<<solution.x2.i<<'i'<<'\n';
        else if (c1.i>0&&c2.i<0)
        std::cout<<solution.x1.r<<'+'<<solution.x1.i<<'i'<<'\n'<<solution.x2.r<<solution.x2.i<<'i'<<'\n';
        else
        std::cout<<solution.x1.r<<'+'<<solution.x1.i<<'i'<<'\n'<<solution.x2.r<<'+'<<solution.x2.i<<'i'<<'\n';
    }
}

int main()
{
  double a,b,c;
  std::cout << "Inserisci i coeffincenti a, b, c" << '\n';
  std::cout << "[ax2 + bx + c = 0]" << '\n';
  std::cout << "a = ";
  std::cin >> a;
  std::cout << "b = ";
  std::cin >> b;
  std::cout << "c = ";
  std::cin >> c;
  solve(a,b,c);
}
