#include <iostream>
#include <cmath>
void shape_properties(std::string s_)
{
    if(s_=="triangolo equilatero")
    {
        float b=0;
        float h=0;
        std::cout<<"Area: "<<(b*h)/2;
        std::cout<<"\nPerimetro: "<< 3*b;
    }
    else if(s_=="quadrato"||s_=="rettangolo")
    {
        float b=0;
        float h=0;
        std::cout<<"Area: "<<b*h;
        std::cout<<"\nPerimetro: "<< (b+h)*2;
    }
    else if(s_=="cerchio")
    {
        float r=3;
        std::cout<<"Area: "<<r*r*3.141593;
        std::cout<<"\nPerimetro: "<< 2*r*3.141593;
    }
    else if(s_=="sfera")
    {
      float r=3;
        std::cout<<"Area: "<<4*r*r*3.141593;
        std::cout<<"\nVolume: "<< (4/3)*r*r*r*3.141593;
    }
}
int main()
{
        // scelta arbitraria della forma
    std::string shape="sfera";
    shape_properties(shape);
}
