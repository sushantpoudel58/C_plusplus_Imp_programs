// Heirarchical inheritance :  (euta  baau  ko  2 ta  xora )

#include<iostream>

using namespace std;

class person       // base class
{
    private:
    char name[20];

    public:
    void getname()
    {
        cout<<"\n Enter name:";
        cin>>name;
    }
    void displayname()
    {
        cout<<"\n Name:"<<name;
    }
};

class student:public person      // child class
{
    private:
    int roll;

    public:
    void get_rollno()
    {
        cout<<"\n Enter roll no.:";
        cin>>roll;
    }
    void display_rollno()
    {
        cout<<"\n Roll no.:"<<roll;
    }
};

class employee:public person   //  child class
{
    private:
    char profession[20];

    public:
    void getpro()
    {
        cout<<"\n Enter Profession:";
        cin>>profession;
    }
    void display_pro()
    {
        cout<<"\n Profession:"<<profession;
    }
};

int main()
{
    student s;
    cout<<"\n Information of  student :";
    s.getname();
    s.get_rollno();

    employee e;
    cout<<"\n Information of employee:";
    e.getname();
    e.getpro();

    cout<<"\n\n Record of student:";
    s.displayname();
    s.display_rollno();

    cout<<"\n\n Record of employee:";
    e.displayname();
    e.display_pro();
   
   return 0;
}