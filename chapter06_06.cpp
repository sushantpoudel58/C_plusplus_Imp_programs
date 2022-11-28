

//2016 spring 6.(a)
// Program that catches multiple exception

#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"\n Enter value of a:";
    cin>>a;

    try
    {
        if(a==1)
        {
            throw a;
        }
        else if(a==2)
        {
            throw a;
        }
        else if(a==3)
        {
            throw a;
        }

    }
    catch(int a)
    {
        cout<<"\n Execption occur";
         cout<<"\n End of program";
    }
    
    return 0;
    
}