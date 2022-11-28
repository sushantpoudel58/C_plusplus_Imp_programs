
// 2015 spring 4.(a)

#include<iostream>
#include<string.h>

using namespace std;

class person 
{
    private:
    char name[20];
    int code;

    public:

   /* person()
    {
        strcpy(name,"\0");
        code=0;
    } 
    */
    person(char n[],int c)
    {
        strcpy(name,n);
        code=c;
    }
    void display()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n Code:"<<code;
    }
};

class account:virtual public person
{
    private:
    float salary;

    public:
    account(char n[],int c, float s):person(n,c)
    {
        salary=s;
    }
    void display()
    {
       //  person::display();

        cout<<"\n Salary:"<<salary;
    }

};

class admin:virtual public person
{
    private:
    int no_of_year_of_experience;

    public:
    admin(char n[],int c, int exp):person(n,c)
    {
        no_of_year_of_experience=exp;
    }
    void display()
    {
       // person::display();

        cout<<"\n No. of year of experience :"<<no_of_year_of_experience;

    }
};

class record: public account, public admin 
{
    private:
    int record_no;

    public:
    record(char n[],int c, float s, int exp, int re):account(n,c,s),admin(n,c,exp)
    {
        record_no=re;
    }
    void display()
    {
        

        cout<<"\n Record no :"<<record_no;
    }

};

int main()
{
    record r("Sushant",007,30000,5,700);

    r.person::display();
    r.account::display();
    r.admin::display();
    r.record::display();

    return 0;
}