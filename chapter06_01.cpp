
//Template
// 2014 spring  4.(b)

//Program to illustrate to   Function Template

#include<iostream>
#include<iomanip>

using namespace std;

template<class T>

void swap( T *x, T *y)
{
    T temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int  main()
{
    int a,b;
    float c,d;
    char p,q;

    cout<<"\n Enter two integers :";
    cin>>a>>b;

     cout<<"\n Enter two floats :";
    cin>>c>>d;

     cout<<"\n Enter two characters:";
    cin>>p>>q;

    cout<<"\n The value of variable before function call :";
    cout<<"\n a="<<a;
    cout<<"\n b="<<b;
    cout<<"\n c="<<c;
    cout<<"\n d="<<d;
    cout<<"\n p="<<p;
    cout<<"\n q="<<q;

    swap(&a,&b);
     swap(&c,&d);
     swap(&p,&q);

     cout<<"\n The value of variable after function call :";
    cout<<"\n a="<<a;
    cout<<"\n b="<<b;
    cout<<"\n c="<<c;
    cout<<"\n d="<<d;
    cout<<"\n p="<<p;
    cout<<"\n q="<<q;

    return 0;
}