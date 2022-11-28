
// Runtime polymorphism ( virtual function)    most imp question


#include<iostream>

using namespace std;

class A
{
    public:
    virtual void display()
    {
        cout<<"\n I am base class ";
    }

};
class B:public A
{
    void display()
    {
        cout<<"\n I am derived class";
    }
};

int main()
{
    A *ptr;
    A a;
    ptr=&a;
    ptr->display();

    B b;
    ptr=&b;

    ptr->display();

    return 0;
}