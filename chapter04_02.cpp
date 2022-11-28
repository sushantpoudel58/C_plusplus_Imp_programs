//Multilevel  inheritance ( 3 pusta ;  baje ko xora & xora ko xora )

#include<iostream>

using namespace std;

class student     // base class 
{
   private:
   int roll_no;

   public:
   void input_roll()
   {
    cout<<"Enter roll no.:";
    cin>>roll_no;
   }
   void display_roll()
   {
    cout<<"\n  Roll no.:"<<roll_no;
   }
};

class exam:public student      // child class
{
    protected:
    int sub1,sub2;

    public:
    void input_marks()
    {
        cout<<"Enter marks in first subject:";
        cin>>sub1;
        cout<<"Enter marks in second subject:";
        cin>>sub2;
    }
    void display_marks()
    {
        cout<<"\n Marks in first subject:"<<sub1;
        cout<<"\n Marks in second subject:"<<sub2;
    }

};

class result:public exam       //  child ko pni  child class
{
    private:
    float total;

    public:
    void calculate_result()
    {
        total=sub1+sub2;
    }
    void display_result()
    {
        cout<<"\n Total result:"<<total;
    }
};

int main()
{
    result r;
    r.input_roll();
    r.input_marks();
    r.calculate_result();

    cout<<"\n\n Record of student:";

    r.display_roll();
    r.display_marks();
    r.display_result();

    return 0;
}
