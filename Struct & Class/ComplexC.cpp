#include <iostream>
class comp {
    private:
    double r;
    double i;
    public:
    comp(double x=0., double y=0.): r{x}, i{y} {} //default construct
    double real() const {return r;}
    double imag() const {return i;}
    void real(double v) {r=v;}
    void imag(double v) {i=v;}
};

comp operator+(comp c1, comp c2)
{
    return{c1.real() + c2.real(), c1.imag() + c2.imag()};
}

int main()
{
    comp c;
    c.real(4);
    std::cout<<c.real();
    std::cout<<c.imag();
}
