
// 2014 spring 6.(b)   and   2018 fall 5.(b)    repeated question

#include<iostream>
#include<string.h>

using namespace std;

class person
{
    private:
    char name[20];
    int age;
    char address[20];

    public:
    person(char n[],int a, char addr[])
    {
        strcpy(name,n);
        age=a;
        strcpy(address, addr);
    }
    void displayperson()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n Age :"<<age;
        cout<<"\n Address:"<<address;
    }
};

class teacher:public person
{
    private:
    char qualification[20];
    char department[20];

    public:
    teacher(char n[],int a,char addr[],char q[],char d[]):person(n,a,addr)   // contructor using base class constructor by ( : )
    {
        strcpy(qualification,q);
        strcpy(department,d);
    }
    void displayteacher()
    {
         person::displayperson();

        cout<<"\n Qualification="<<qualification;
        cout<<"\n Department="<<department;

       // person::displayperson();
    }
};

class student:public person
{
    private:
    char program[20];
    char semester[20];

    public:
    student(char n[],int a,char addr[],char p[], char s[]):person(n,a,addr)
    {
        strcpy(program,p);
        strcpy(semester,s);
    }
    void displaystudent()
    {
        person::displayperson();

        cout<<"\n Program :"<<program;
        cout<<"\n Semester:"<<semester;

       //person::displayperson();
    }
};

int main()
{
    teacher t("Bishwaraj",30,"Pokhara","Master","computer");
    student s("Sushant", 12,"Rupandehi", "Computer","second");

    cout<<"\n Records of teacher:";
   // t.person::displayteacher();
    t.displayteacher();

    cout<<"\n Records of student:";
   // s.person::displaystudent();
    s.displaystudent();

    return 0;
}