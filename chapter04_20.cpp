
// 2016 spring 2.(a)
// The Derived class  must have one conteructor which receives arguements/values to pass to base class 
// and initializes its data member..

// Program to show the effect when base class has constructor and derived class has no constructor
// it occurs error

#include<iostream>

using namespace std;

class figure
{
    protected:
    float dimension1, dimension2;

    public:
    figure(float dim1, float dim2)
    {
        dimension1=dim1;
        dimension2=dim2;
    }
    void display()
    {
        cout<<"\n First dimension :"<<dimension1;
        cout<<"\n Second dimension :"<<dimension2;
    }
};

class rectangle:public figure               // this Class has no constructor
{
    public:
    float getarea()
    {
        return(dimension1*dimension2);
    }
};

int main()
{
    rectangle r;
    r.display();
    cout<<"\n Area of rectangle is:"<<r.getarea();

    return 0;
}