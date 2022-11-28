// Multiple inheritance (2 ta  baau ko  euta  xora)

#include<iostream>

using namespace std;

class academic_activities    // base class
{
    protected:
    float ac_marks;

    public:
    void get_acad_marks()
    {
        cout<<"\n Enter academic marks:";
        cin>>ac_marks;
    }
    void display_acad_marks()
    {
        cout<<"\n Academic marks:"<<ac_marks;
    }
};

class extra_activities        // base class
{
    protected:
    float extra_marks;

    public:
     void get_extra_marks()
    {
        cout<<"\n Enter extra marks:";
        cin>>extra_marks;
    }
     void display_extra_marks()
    {
        cout<<"\n Extra marks:"<<extra_marks;
    }
    
};

class result:public academic_activities,public extra_activities       //   child  class
{
    private:
    float total;

    public:
    void calculate_results()
    {
        total=ac_marks+extra_marks;
    }
    void display_totalmarks()
    {
        cout<<"\n Result:"<<total;
    }
};

int main()
{
    result r;
    
    r.get_acad_marks();
    r.get_extra_marks();

    cout<<"Total marks obtained:";

    r.display_acad_marks();
    r.display_extra_marks();

    r.calculate_results();
    r.display_totalmarks();

    return 0;
}