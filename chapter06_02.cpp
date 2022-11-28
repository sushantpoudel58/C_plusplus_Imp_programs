
//Class Template
// 2014 spring  4.(b)

#include<iostream>
#include<iomanip>

using namespace std;

template<class T>

class rectangle
{
    public:
    T first, second;

    public:
    rectangle()
    {
        first=0;
        second=0;
    }
    rectangle(T x, T y)
    {
        first=x;
        second=y;
    }
     T area()
        {
            return first*second;
        }
};

int main()
{
    rectangle<int> reci(5,7);
    rectangle<float> recf(3.5,6.8);

    cout<<"\n Area with integer dimension :"<<reci.area();
    cout<<"\n Area with float dimension   :"<<recf.area();

    return 0;
}