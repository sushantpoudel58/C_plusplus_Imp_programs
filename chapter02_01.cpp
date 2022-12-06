
// 2014 spring

// Program to find largest of   4 integer number

#include<iostream>
using namespace std;

class A
{
    private:
    int a;

    public:
    void getdata_A()
    {
        cout<<"\n Enter first number ";
        cin>>a;
    }
    void displaydata_A()
    {
        cout<<"\n First number is :"<<a;
    }

    friend void large(A,B,C);
};

class B

{
    private:
    int b;

    public:
    void getdata_B()
    {
        cout<<"\n Enter second number ";
        cin>>b;
    }
    void displaydata_B()
    {
        cout<<"\n Second number is :"<<b;
    }

    friend void large(A,B,C);
};
class C

{
    private:
    int c;

    public:
    void getdata_C()
    {
        cout<<"\n Enter third  number ";
        cin>>c;
    }
    void displaydata_C()
    {
        cout<<"\n Third number is :"<<c;
    }

    friend void large(A,B,C);
};

void large(A ob1, B ob2, C ob3)
{
    
}




