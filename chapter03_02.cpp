

// 2018 fall 

#include<iostream>

using namespace std;

class box
{
    private:
    float L,B,H;

    public:
    box()
    {
        L=0;
        B=0;
        H=0;
    }

    box(float le, float be, float he)
    {
        L=le;
        B=be;
        H=he;
    }

    box(box&ob)
    {
        L=ob.L;
        B=ob.B;
        H=ob.H;
    }

    void display()
    {
        cout<<"\n Length :"<<L;
         cout<<"\n Breadth :"<<B;
          cout<<"\n Height :"<<H;
    
    }

    float volume()
    {
        return (L*B*H);
    }
};

int main()
{
    float vol;

    box b1;
    box b2(10.5, 11.5, 12.5);
    box b3(b2);

   cout <<"\n Default contructor:";
    b1.display();
    vol=b1.volume();
    cout<<"\n Volume of box is :"<<vol;

    cout <<"\n Parameterized contructor:";
    b2.display();
    vol=b2.volume();
    cout<<"\n Volume of box is :"<<vol;

    cout <<"\n Copy  contructor:";
    b3.display();
    vol=b3.volume();
    cout<<"\n Volume of box is :"<<vol;

    return 0;
}