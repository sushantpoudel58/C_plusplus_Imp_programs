// Program to illustrate  constructor and destructor execution in single inheritance 
// 2013 spring 4.(a)  1st part


#include<iostream>

using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"\n Base class constructor";
    }
    ~Base()
    {
        cout<<"\n Base class destructor";
    }
};

class Derived:public Base
{
    public:
    Derived()
    {
        cout<<"\n Derived class constructor";
    }
    ~Derived()
    {
        cout<<"\n Derived class destructor";
    }
};

int main()
{
    Derived d;

    return 0;
}