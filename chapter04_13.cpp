
// 2017 Fall 4.(b)
// Program to illustrate function overriding

#include<iostream>

using namespace std;

class person
{
    private:
    char name[20];

    public:
    void getdata()
    {
        cout<<"\n Enter name of person:";
        cin>>name;                               // name[]  lekhna hunna 
    }
    void displaydata()
    {
        cout<<"\n Name:"<<name;
    }
};

class student:public person
{
    private:
    int rollno;

    public:
    void getdata()
    {
         cout<<"\n Enter roll number:";
         cin>>rollno;
    }
    void displaydata()
    {
        cout<<"\n Roll number:"<<rollno;
    }
};

int main()
{
    student obj;
    obj.person::getdata();      // problem solve using scope resolution operator
    obj.getdata();

    obj.person::displaydata();  //problem solve using scope resolution operator
    obj.displaydata();

    return 0;
}