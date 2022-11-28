
// Program to illustrate the concept of reusability using inheritance
//2013 spring 3.(b)

#include<iostream>

using namespace std;

class person
{
    private:
    char name[20];
    int age;

    public:
    void getdata_person()
    {
        cout<<"\n Enter name:";
        cin>>name;
        cout<<"\n Enter age:";
        cin>>age;
    }
    void displaydata_person()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n Age:"<<age;
    }

};

class  student:public person
{
    private:
    int rollno;
    public:
    void getdata_student()
    {
        cout<<"\n Enter roll no.:";
        cin>>rollno;
    }
    void displaydata_student()
    {
        cout<<"\n Roll no.:"<<rollno;
    }
};

class employee:public person{
    private:
    float salary;

    public:
    void getdata_employee()
    {
        cout<<"\n Enter salary:";
        cin>>salary;
    }
    void displaydata_employee()
    {
        cout<<"\n Salary:"<<salary;
    }

};

int main()
{
    student s;
    cout<<"\n Enter the information of student:";
    s.getdata_person();
    s.getdata_student();

    employee e;
    cout<<"\n Enter the information of Employee :";
    e.getdata_person();
    e.getdata_employee();

    cout<<"\n The information of student is :";
    s.displaydata_person();
    s.displaydata_student();

    cout<<"\n The information of employee is:";
    e.displaydata_person();
    e.displaydata_employee();

    return 0;

}
