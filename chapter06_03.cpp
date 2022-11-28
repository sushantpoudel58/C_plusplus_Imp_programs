
// 2016 Fall 5.(b)

#include<iostream>

using namespace std;

template<class T, class N>

void calculate(T a[], N n)
{
    int i;
    T s=0 , mul=1 , ave;

    for(i=0; i<n; i++)
    {
        s=s+a[i];
        mul=mul*a[i];
    }
    ave=s/n;

    cout<<"\n Aaverage is:"<<ave;
    cout<<"\n Multiplication :"<<mul;
}

int main()
{
    int arr[4]={10,20,30,40};
    float arr2[4]={10.4, 11.3, 12.7, 14.9};

    cout<<"\n Average and multiplication of integer numbers :";
    calculate(arr, 4);

    cout<<"\n Aaverage and multiplication of float numbers :";
    calculate(arr2 ,4);

    return 0;
}