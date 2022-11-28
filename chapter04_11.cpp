//Program to illustrate  constructor and destructor execution in multiple ineritance
//  2013 spring 4.(a)  2nd  part

#include<iostream>

using namespace std;

class base_one
{
    public:
    base_one()
    {
        cout<<"\n Base-one constructor";
    }
    ~base_one()
    {
        cout<<"\n Base-one destructor";
    }
};

class base_two
{
    public:
    base_two()
    {
        cout<<"\n Base-two constructor";
    }
    ~base_two()
    {
        cout<<"\n Base-two destructor";
    }
};

class derived:public base_one,base_two
{
    public:
    derived()
    {
        cout<<"\n Derived class constructor";
    }
    ~derived()
    {
        cout<<"\n Derived class destructor";
    }
};

int main()
{
    derived d;

    return 0;
}