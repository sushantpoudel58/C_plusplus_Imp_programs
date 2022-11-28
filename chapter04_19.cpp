
// 2014 spring 3.(a)

// WAP to illustrate base class pointer to derived class object

#include<iostream>

using namespace std;

class base
{
    private:
    int a;

    public:
    void get_basedata()
    {
        cout<<"\n Enter the value of a :";
        cin>>a;
    }
    void display_basedata()
    {
        cout<<"\n Value of a :"<<a;
    }
};

class derived 
{
    private:
    int b;

    public:
    void get_deriveddata()
    {
        cout<<"\n Enter the value of b :";
        cin>>b;
    }
    void display_deriveddata()
    {
        cout<<"\n Value of b :"<<b;
    }
};

int main()
{
    base b;
    base *p;
    derived d;

    p=&b;
    p->get_basedata();
    p->display_basedata();

    p=&d;
    p->get_basedata();
    p->display_basedata();

    ((derived*)p)->get_deriveddata();
    ((derived*)p)->display_deriveddata();

    return 0;
    
}