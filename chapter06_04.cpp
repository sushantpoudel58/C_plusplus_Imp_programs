
// 2016 spring , 2017 spring, 2014 fall

#include<iostream>

using namespace std;

template<class T>

T sum( T a, T b)
{
    return(a+b);
}

int main()
{
    int p,q;
    float x,y;

    cout<<"\n Enter two integers :";
    cin>>p>>q;

     cout<<"\n Enter two floats :";
    cin>>x>>y;

    cout<<"\n Sum of two integers :"<<sum(p,q);
    cout<<"\n Sum of two floats   :"<<sum(x,y);

    return 0;
}
