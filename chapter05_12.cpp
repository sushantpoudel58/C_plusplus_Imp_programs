
// 2016 Fall 4.(b)  & 2017 spring & 2014 Fall    imp question

#include<iostream>
#include<math.h>

using namespace std;

class rectangular
{
    private:
    float xco, yco;

    public:
    rectangular()
    {
        xco=0;
        yco=0;
    }
    rectangular(float x, float y)
    {
        xco=x;
        yco=y;
    }
    void display()
    {
        cout<<"("<<xco<<","<<yco<<")";
    }
};

class polar
{
    private:
    float radius, angle;

    public:
    polar()
    {
        radius=0;
        angle=0;
    }
    polar(float r, float a)
    {
        radius=r;
        angle=a;
    }
    void display()
    {
        cout<<"("<<radius<<","<<angle<<")";
    }

    operator rectangular()
    {
        float x,y;
        x=radius*cos(angle);
        y=radius*sin(angle);
        return rectangular(x,y);
    }
};

int main()
{
    rectangular ob;
    polar p(70,0.78);
    ob=p;
    cout<<"\n The polar coordinate is:";
    p.display();
    cout<<"\n The rectangular coordinate is :";
    ob.display();

    return 0;
}