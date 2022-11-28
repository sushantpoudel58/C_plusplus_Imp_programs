
//  Example program to show "Derivation" ( error occurs)

/* In this program, we can say that  derivation cannot access private data member of class */

#include<iostream>

using namespace std;

class laptop
{
    private:
    float a;

    protected:
    float b;

    public:
    void setdata()
    {
        cout<<"\n Enter values of a and b:";
        cin>>a>>b;
    }
     
     //  no any friend function
    
};

class mobile:public laptop
{
    public:
    void display()
    {
        cout<<"\n The first number is :"<<a;
        cout<<"\n The second number is :"<<b;
    }
};

int main()
{

    mobile ob;
    ob.setdata();
    ob.display();

    return 0;
}