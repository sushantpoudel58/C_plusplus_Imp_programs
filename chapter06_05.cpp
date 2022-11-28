
// 2013 spring 5 (a)
// Program to use the execption handling for divide by zero error

#include<iostream>

using namespace std;

int main()
{
    float num1, num2,result;
    cout<<"\n Enter two  numbers:";
    cin>>num1>>num2;

    try
    {
        {
            if (num2!=0)
            {
                result=num1/num2;
                cout<<"\n The result is:"<<result;
            }
            else
            {
                throw num2;
            }

        
        }
    }
    catch(float n)
    {
        cout<<"\n The divisor must be non zero value.";
        cout<<"\n Try again for another divisor.";
    }

    return 0;
    
}