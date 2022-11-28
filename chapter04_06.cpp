// 2015 Fall  4(c)  => multilevel inheritance

#include<iostream>

using namespace std;

class base       // base  class
{
    public:
    int n;

    void get_base_data()
    {
        cout<<"\n  Enter the  numbers of  students :";
        cin>>n;
    }
    void display_base_data()
    {
        cout<<"\n The  numbers of  students:"<<n;
    }
};

class derive1:public base     //  child class
{
    public:
    int rollno;
    char name[20][20];

   // public:
    void get_derive1_data()
    {
        for(int i=0; i<n; i++)
        {
            cout<<"Enter roll numbers:";
            cin>>rollno;
            cout<<"\n Enter name:";
            cin>>name[i];
        }
    }
};

class derive2:public derive1        //  child class  ko pni child class
{
    public:
    void display_derive2_data()
    {
        for(int i=0; i<n; i++)
        {
            cout<<"\n Roll number is :"<<rollno;
            cout<<"\n Name is :"<<name[i];
        }
    }
};

int main()
{
    derive2 ob;
    ob.get_base_data();
    ob.get_derive1_data();

    ob.display_base_data();
    ob.display_derive2_data();

    return 0;
}