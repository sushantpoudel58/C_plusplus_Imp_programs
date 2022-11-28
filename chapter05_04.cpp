
// 2013 spring  6.(a)       (   output maa  gadbad vaxa)

#include<iostream>

using namespace std;

class student
{
    private:
    char name[20];
    char dob[20];
    int rollno;

    public:
    void getdata()
    {
        cout<<"\n Enter name:";
        cin>>name;
        cout<<"\n Enter date of birth:";
        cin>>dob;
        cout<<"\n Enter roll number :";
        cin>>rollno;
    }
    void discount()
    {
        cout<<" \n You  get discount according to graduate ";
    }

    virtual void displaydata()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n DOB:"<<dob;
        cout<<"\n Roll number:"<<rollno;
    }

};

class PG:public student
{
    public:
    void displaydata()
    {
        cout<<"\n  I am post graduate";
        
        student::displaydata();
    }
};

class UG:public student
{
    public:
    void displaydata()
    {
        cout<<"\n I am under graduate";

        student::displaydata();
    }
    
};

int main()
{
    student *s;
    student ob1;
    PG ob2;
    UG ob3;

    s=&ob1;
    s->getdata();
    s->discount();
    //s->displaydata();

    s=&ob2;
    s->displaydata();
    
    s=&ob3;
    s->displaydata();

    return 0;
}