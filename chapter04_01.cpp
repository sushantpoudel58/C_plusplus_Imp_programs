//  Single inheritance    2016 spring 2017 spring

#include<iostream>

using namespace std;

class Student
{
    private:
    char name[20];
    int age;
    
    public:
    void getstudentdata()
    {
        cout<<"\n Enter name:";
        cin>>name;
        cout<<"\n Enter age:";
        cin>>age;
    }
    void displaystudentdata()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n Age:"<<age;
    }
};

class boy:public Student
{
    private:
    char faculty[20];
    float marks;

    public:
    void getboydata()
    {
        getstudentdata();

        cout<<"Enter faculty:";
        cin>>faculty;
        cout<<"Enter marks:";
        cin>>marks;
    }
    void displayboydata()
    {
        displaystudentdata();

        cout<<"\n Faculty:"<<faculty;
        cout<<"\n Marks:"<<marks;
    }

};

int main()
{
    boy ob;
    ob.getboydata();
    ob.displayboydata();

    return 0;
}