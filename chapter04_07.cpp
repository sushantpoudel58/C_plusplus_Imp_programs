//   2013 Fall 3.(b)

#include<iostream>

using namespace std;

class student       //  base  class
{
    private:
    int rollno;

    public:
    void get_student_data()
    {
        cout<<"\n Enter the roll no. is:";
        cin>>rollno;
    }
    void display_student_data()
    {
        cout<<"\n Roll no. :"<<rollno;
    }
};

class exam:virtual public student   //  child  class
{
    protected:
    int exam_marks;

    public:
    void get_exam_data()
    {
        cout<<"\n Enter exam marks:";
        cin>>exam_marks;
    }
    void display_exam_data()
    {
        cout<<"\n Exam marks:"<<exam_marks;
    }
};

class sports:virtual public student       //  child  class
{
    protected:
    int sport_marks;

    public:
    void get_sport_data()
    {
        cout<<"\n Enter sports marks:";
        cin>>sport_marks;
    }
    void display_sport_data()
    {
        cout<<"\n Sports marks:"<<sport_marks;
    }
};

class result:public exam, public sports       //  child  ko pni  child  class
{
    private:
    int total;

    public:
    void display_total()
    {
        total=exam_marks+sport_marks;
        
      /*  display_student_data();             // all display function of 3 class  are declared in this  function
        display_exam_data();                //  to  display these function by calling only one total function
        display_sport_data();*/

        cout<<"\n Total marks:"<<total;
    }
};

int main()
{
    result r;
    r.get_student_data();
    r.get_exam_data();
    r.get_sport_data();

  //  r.display_total();     // all  3 function of  3 classes are displaying  together
    r.display_student_data();
    r.display_exam_data();
    r.display_sport_data();
    r.display_total();

}