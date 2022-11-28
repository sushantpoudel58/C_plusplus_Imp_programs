
// Compile time polymorphism 
// operator overloading

#include<iostream>
#include<math.h>

using namespace std;

class complex 
{
    private:
    float real, img;

    public:
    complex()
    {
        real=0;
        img=0;
    }

    complex(float r, float i)
    {
        real =r;
        img=i;
    }

    complex operator+(complex c)
    {
        complex temp;
        temp.real=real + c.real;
        temp.img =img + c.img;
        return temp;
    }

    void display()
    {
        cout<<real<<"+j"<<img;
    }

};

int main()
{
    complex c1(2,3),c2(3,4),c3;
   
    c1.display();
    c2.display();

     c3=c1+c2;
    c3.display();

    return 0;
}