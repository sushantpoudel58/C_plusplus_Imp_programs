// 2018 fall

#include<iostream>
#include<string.h>

using namespace std;

class person               // base  class
{
    protected:
    char name[20];
    int age;
    char address[20];

public:
person()
{
    strcpy (name,"\0");
    age=0;
    strcpy (address,"\0");

}
    void showdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Address:"<<address<<endl;
    }



};

class teacher:public person
{
    char qua[20];
    char depart[20];

    public:

    teacher()
    {
        strcpy (qua,"Bachelor");
        strcpy (depart,"Computer");

    }
      void showdata(){
        person::showdata();

        cout<<"Qualification:"<<qua<<endl;
        cout<<"Department:"<<depart<<endl;
        
    }




};

class student:public person 
{
    char pro[20];
    int sem;

    public:

    student()
    {
        strcpy (pro,"\0");
        sem=0;
    }
      void showdata(){

         person::showdata();

        cout<<"Program:"<<pro<<endl;
        cout<<"Semester:"<<sem<<endl;
       
    }


};

int main()
{
    teacher t;
    student s;

    t.showdata();
    s.showdata();

    return 0;

}