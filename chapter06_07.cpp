
// question guide page no 149

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

template<class T>

class rectangular
{
    private:
    T xco,yco;

    public:
    rectangular()
    {
        xco=0;
        yco=0;
    }
    rectangular( T m, T n)
    {
        xco=m;
        yco=n;
    }
    void display()
    {
        cout<<"("<<xco<<","<<yco<<")";
    }
};

template<class T>

class polar
{
    private:
    T radius, angle;

    public:

    polar()
    {
        radius=0;
        angle=0;
    }

    polar(T r, T an)
    {
        radius=r;
        angle=an;
    }
    void display()
    {
        cout<<"("<<radius<<","<<angle<<")";
    }

    operator rectangular<T>()
    {
        T x;
        T y;

        x=radius*cos(angle);
        y=radius*sin(angle);

        return rectangular<T>(x,y);
    }


};

int main()
{
    rectangular<float> r;

    polar<float> p(1.0, 0.78);

    r=p;
    p.display();
    rectangular<int> r1;

    polar<int> p1(1,1);

    r1=p1;
    p1.display();
    r1.display();

    return 0;
}