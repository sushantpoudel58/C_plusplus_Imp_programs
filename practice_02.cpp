#include<iostream>

using namespace std;

class Student
{
    private:
    int roll_no;
   // int marks;

    public:
    void getdata()
    {
        cout<<"Enter the roll no. :";
        cin>>roll_no;
       /* cout<<"Enter the marks is :";
        cin>>marks;*/
    }
    void displaydata()
    {
        cout<<"\n The roll no. is :"<<roll_no;
      //  cout<<"\n The marks is:"<<marks;
    }

};

class Test:public Student
{
    public:
    int marks1, marks2;
    //public:

    void getdata()
    {
        cout<<"Enter marks in Physics:";
        cin>>marks1;
        cout<<"Enter marks in Chemistry:";
        cin>>marks2;
    }
    void displaydata()
    {
        cout<<"\n The marks of Physics is :"<<marks1;
        cout<<"\n The marks of Chemistry is:"<<marks2;
    }

};

class Result:public Test
{
    int marks=marks1+marks2;

    void displaydata()
    {
       // cout<<"The roll no. is:"<<roll_no;
        cout<<"The total marks of two subject is :"<<marks;
    }

};
int main()
{
    Test ob;
    ob.getdata();
    ob.displaydata();
    



    return 0;
}
