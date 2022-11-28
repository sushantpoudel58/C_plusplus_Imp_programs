
// 2013 spring 3.(a)

#include<iostream>

using namespace std;

class Time
{
    private:
    int hour;
    int minute;
    int second;

    public:
    Time()
    {
        hour=0;
        minute=0;
        second=0;
    }

    Time(int h, int m, int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void display()
    {
        cout<<"        ";
        cout<<hour<<":"<<minute<<":"<<second;
    }

    Time operator+(Time t)
    {
        Time temp;
        temp.second=second+t.second;
        temp.minute=minute+t.minute+(temp.second)/60;
        temp.second=temp.second%60;
        temp.hour=hour+t.hour+(temp.minute)/60;
        temp.minute=temp.minute%60;
        temp.hour=temp.hour%12;
        return temp;
    }
};

int main()
{
    Time t1(8,35,50), t2(5,30,15),t3;

    t1.display();
    t2.display();
    t3=t1+t2;
    t3.display();

    return 0;
}