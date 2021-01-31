#include <iostream>
struct comp{
    double r; //real part
    double i; //immaginary part
};
void norm(comp c)
{
    std::cout<<c.r*c.r + c.i*c.i;
}

comp operator+(comp const& cs1, comp const& cs2)
{
    return comp{cs1.r + cs2.r, cs1.i + cs2.i};
}

int main()
{
    comp c1, c2;
    comp c;
    c1 = {1.,2.};
    c2 = {2.,4.};

    c=c1+c2;
    std::cout<<c.r<<"+"<<c.i<<"i";
}
