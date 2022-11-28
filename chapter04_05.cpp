// Hybrid inheritance (the use of more than one type inheritance)

#include<iostream>

using namespace std;

class person            // base class
{
    private:
    char name[20];

    public:
    void get_data_person()
    {
        cout<<"\n Enter name:";
        cin>>name;
    }
    void display_data_person()
    {
        cout<<"\n Name:"<<name;
    }
};

class student:public person        // child class
{
    private:
    int rollno;

    public:
    void get_data_student()
    {
        cout<<"\n Enter roll no.:";
        cin>>rollno;
    }
    void display_data_student()
    {
        cout<<"\n Roll no.:"<<rollno;
    }
};

class employee:public person    //   child  class
{
    private:
    char prof[20];
    public:

    void get_data_employee()
    {
    cout<<"\n Enter profession:";
    cin>>prof;
    }
    void display_data_employee()
    {
        cout<<"\n Profession:"<<prof;
    }
};

class exam:public student           // child class ko  pni   child class 
{
    protected:
    float theo_marks,lab_marks;

    public:
    void get_data_exam()
    {
        cout<<"\n Enter theory marks:";
        cin>>theo_marks;
        cout<<"\n Enter lab marks:";
        cin>>lab_marks;
    }
    void display_data_exam()
    {
        cout<<"\n Theory marks:"<<theo_marks;
        cout<<"\n Lab marks:"<<lab_marks;
    }
};
class result:public exam        //  child class ko pni  child class ko  child class
{
    private:
    float total;

    public:
    void calculate_data()
    {
        total=theo_marks +lab_marks;
    }
    void display_data()
    {
        cout<<"\n Total:"<<total;
    }
};

int main()
{
    result r;
    cout<<"\n\n Information of student:";
    r.get_data_person();
    r.get_data_student();
    r.get_data_exam();

    employee e;
    cout<<"\n\n Information of employee:";
    e.get_data_person();
    e.get_data_employee();

    cout<<"\n\n Record of student:";
    r.display_data_person();
    r.display_data_student();
    r.display_data_exam();
    r.calculate_data();
    r.display_data();

    cout<<"\n\n Record of employee:";
    e.display_data_person();
    e.display_data_employee();

    return 0;
}