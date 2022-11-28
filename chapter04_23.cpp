
// 2019 Fall 4.(a)

#include<iostream>
#include<string.h>

using namespace std;

class university
{
    
     private:
    char name[20];
    char location[20];

     public:
     
    university(char nu[], char loc[])
    {
        strcpy(name,nu);
        strcpy(location,loc);
    }
    void display()
    {
        cout<<"\n Name of university :"<<name;
        cout<<"\n Location of university :"<<location;
    }
};
class affiliated_college: virtual public university
{
    
     private:
    char name_a[20];
    char address[20];
    char name_of_programs[20];

     public:
    affiliated_college(char nu[], char loc[],char na[],char addr[],char apro[]):university(nu,loc)
    {
        strcpy(name_a,na);
        strcpy(address,addr);
        strcpy(name_of_programs,apro);
    }
    void display()
    {
        cout<<"\n Name of affiliated college :"<<name_a;
        cout<<"\n Address of affiliated college :"<<address;
        cout<<"\n Name of Programs :"<<name_of_programs;
    }
};

class constitutent_college: virtual public university
{
    
     private:
    char school[20];
    char dean[20];
    char name_of_program[20];

    public:
    constitutent_college(char nu[], char loc[],char scl[],char de[],char cpro[]):university(nu,loc)
    {
        strcpy(school,scl);
        strcpy(dean,de);
        strcpy(name_of_program,cpro);
    }
    void display()
    {
        cout<<"\n Name of school:"<<school;
        cout<<"\n Name of Dean:"<<dean;
        cout<<"\n Name of Program:"<<name_of_program;
    }
};

class student:  public affiliated_college,  public constitutent_college
{
    private:
   
    char name_s[20];
    char program[20];
    int enrolled_year;

    public:
     student(char nu[], char loc[],char na[],char addr[],char apro[],char scl[],char
     de[],char cpro[],char ns[],char spro[],int en): affiliated_college(nu,loc,na, addr, apro),
       constitutent_college(nu,loc,scl,de,cpro),university(nu,loc)
       
     {
        strcpy(name_s,ns);
        strcpy(program,spro);
        enrolled_year=en;
     }

     void display()
     {
        cout<<"\n Name of student:"<<name_s;
        cout<<"\n Name of program:"<<program;
        cout<<"\n Enrolled year:"<<enrolled_year;
     }

     
};

int main()
{
    student st("Pokhara","lekhnath","LEC","Bhalwari","Computer","SOE","Vimsen","computer","Ram","computer",2021);
    st.university::display();
    st.affiliated_college::display();
    st.constitutent_college::display();
    st.display();

    return 0;
}