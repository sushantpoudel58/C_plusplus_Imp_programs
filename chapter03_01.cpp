
//2018 spring  3.(a)

#include<iostream>
#include<math.h>

using namespace std;

class triangle 
{
    private:
    int a,b,c,s,area;

    public:
    triangle()
    {
        a=0;
        b=0;
        c=0;
    }
    triangle(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }

    void calculate()
    {
        s=(a+b+c)/2;
         area =sqrt((s*(s-a)*(s-b)*(s-c))); 
    }

    void display()
    {
        cout<<"\n Area of triangle is :"<<area;
    }
};

int main()
{
    triangle ob1;
    triangle ob2(8,9,10);
   
    ob2.calculate();
    ob2.display();

    return 0;
}