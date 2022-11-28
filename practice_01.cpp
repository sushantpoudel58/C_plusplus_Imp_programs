//function overloading
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
/*
void area(int a,int b,int c) // triangle
{
    float s,ar;
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"\nArea of triangle:"<<ar;
}
void area(int a,int b) // rectangle
{

    cout<<"\nArea of rectangle:"<<a*b;
}
int main()
{
    area1(5,6,7);
    area2(4,5);
    return 0;
}
*/
/*
class A
{
    int l,b;
    public:
       /* A()
        {
            l=2;
            b=3;
            cout<<"Area:"<<l*b;
        }
        void input()
        {
            l=2;
            b=3;
            cout<<"Area:"<<l*b;
        }
};

int main()
{
    A obj;
    obj.input();
    return 0;
}
*/
/*
class complex
{
    int real,imag;
public:
    complex()
    {
    real=0;
    imag=0;
    }
    void input()
    {
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Enter imaginary part:";
        cin>>imag;
    }
    void display()
    {

        cout<<"The sum is:"<<real<<"+i"<<imag;
    }
    complex operator +(complex c3)
    {
       complex temp;
       temp.real=real+c3.real;
       temp.imag=imag+c3.imag;
       return temp;
    }
};
int main()
{
    complex c1,c2,c;
    c1.input();
    c2.input();
    c=c1+c2;
    c.display();
    return 0;
}
*//*
class student
{
    char name[20];
    int roll;
public:
    void input()
    {
        cout<<"Name:";
        cin>>name;
        cout<<"Roll:";
        cin>>roll;
    }
    void display()
    {
        cout<<"\nName:"<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
    }
};
class Engineering:public student
{
    int marks;
     public:
         void input()
         {
            student::input();
            cout<<"Enter marks in Engineering:";
            cin>>marks;
         }
          void display()
    {
        student::display();
        cout<<"Marks in Engineeerng:"<<marks;
    }

};
class Science:public student
{
    int marks;
     public:
         void input()
         {
            student::input();
            cout<<"Enter marks in science:";
            cin>>marks;
         }
          void display()
    {
        student::display();
        cout<<"Marks in science:"<<marks;
    }
};
int main()
{
    Engineering e;
    Science s;
    e.input();
    s.input();
    e.display();
    s.display();
    return 0;
}
*/
/*
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
        strcpy (name,"Sushant");
        age=20;
        strcpy (address,"Butwal");
        strcpy (qua,"Bachelors");
        strcpy (depart,"Computer");

    }
      void showdata()
      {
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
        strcpy (name,"Deephang");
        age=21;
        strcpy (address,"Kathmadnu");
        strcpy (pro,"BCT");
        sem=3;
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
*/
/*
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
*/
/*
class A
{
public:
    A()
    {
      cout<<"\nHi I am constructor class A.";
    }
    ~A()
    {
      cout<<"\nHi I am destructor class A.";
    }
};
class B
{
public:
    B()
    {
      cout<<"\nHi I am constructor class B.";
    }
    ~B()
    {
      cout<<"\nHi I am destructor class B.";
    }
};
class C
{
public:
    C()
    {
      cout<<"\nHi I am constructor class C.";
    }
    ~C()
    {
      cout<<"\nHi I am destructor class C.";
    }
};
int main()
{
    A A1;
    B B1;
    C C1;
    return 0;
}
*/
