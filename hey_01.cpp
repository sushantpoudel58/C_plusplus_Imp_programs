#include<string.h>
class person              
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
    void showdata()
    {
        cout<<"Name:"<<name;
        cout<<"Age:"<<age;
        cout<<"Address:"<<address;
    }
};

class teacher:public person
{
    char qua[20];
    char depart[20];

    public:

    teacher(char n[],int a, char ad[] ,char q[],char d[])
    {
        strcpy (name,n);
        age=a;
        strcpy (address,ad);
        strcpy (qua,q);
        strcpy (depart,d);

    }
      void showdata()
      {
        person::showdata();

        cout<<"\n Qualification:"<<qua;
        cout<<"\n Department:"<<depart;

    }




};

class student:public person
{
    char pro[20];
    int sem;

    public:

    student(char n[],int a, char ad[],char p[],int s)
    {
        strcpy (name,n);
        age=a;
        strcpy (address,ad);
        strcpy (pro,p);
        sem=3;
    }
      void showdata(){

         person::showdata();

        cout<<"\n Program:"<<pro;
        cout<<"\n Semester:"<<sem;

    }


};

int main()
{
    teacher t("sushant",20,"butwal","bachelor", "computer");
    student s(" jackson",25," india", "civil",4 );
    t.showdata();
    s.showdata();
    return 0;
}