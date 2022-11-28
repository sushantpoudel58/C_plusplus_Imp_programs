

/*Program to find the sum of two Complex number using the concept of dynamic 
constructor */

#include<iostream>
using namespace std;
class complex
{
int *real,*imag;
public:
complex()
{
real=new int;
imag=new int;
*real=0;
*imag=0;
}
complex(int r,int i)
{
real=new int;
*real=r;
imag=new int;
*imag=i;
}
void display()
{
cout<<*real<<"+i"<<*imag<<endl;
}
void addcomplex(complex c1,complex c2)
{
*real=*c1.real+*c2.real;
*imag=*c1.imag+*c2.imag;
}
};
int main()
{
complex c1(5,10);
complex c2(2,4);
complex c3;
cout<<"First complex number=";
c1.display();
cout<<"Second complex number=";
c2.display();
cout<<"Sum =";
c3.addcomplex(c1,c2);
c3.display();
return 0;
}