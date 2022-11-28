
// 2013 Fall 7.b
//Program to illustrate  virtual destructor 

#include<iostream>

using namespace std;

class base
{
    public:
    base()
    {
        cout<<"\n Base object is created";
    }
    virtual~base()                                  // virtual destructor
    {
        cout<<"\n Base object is destroyed ";
    }
};

class derived:public base
{
    public:
    derived()
    {
        cout<<"\n Derived object is created";

    }
    ~derived()
    {
        cout<<"\n Derived object is destroyed ";
    }
};

int main()
{
    base *b;
    b=new derived;
    delete b;

    return 0;
    
}