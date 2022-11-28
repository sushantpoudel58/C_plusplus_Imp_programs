

// 2013 Fall  5.(b)  " program to illustrate containership or nested classes"

#include<iostream>

using namespace std;

class birthday
{
    private:
    int day;
    int month;
    int year;

    public:
    void getdata_birthday()
    {
        cout<<"\n Enter day,month and year :";
        cin>>day>>month>>year;
    }
    void displaydata_birthday()
    {
        cout<<"\n Day:"<<day<<endl;
        cout<<"\n Month:"<<month;
        cout<<"\n Year:"<<year;
    }
};

class person
{
    private:
    char name[20];

    public:

    birthday dob;    // object of class  birthday

    //public:
    void getdata_person()
    {
        cout<<"\n Enter name of Person:";
        cin>>name;
        cout<<"\n Enter date of  birth:";
        
        dob.getdata_birthday();
    }
    void displaydata_person()
    {
        cout<<"\n Name of Person:"<<name;
        cout<<"\n Date of birth is:";
        
        dob.displaydata_birthday();
    }
};

int main()
{
    person ob;
    ob.getdata_person();
    ob.displaydata_person();

    return 0;
}
