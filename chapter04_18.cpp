
// 2017 Fall 3.(b)    Ambuiguity in multiple inheritance

#include<iostream>

using namespace std;

class Base_one
{
    public:
    void func()
    {
        cout<<"\n This is base one function.";
    }
};

class Base_two
{
    public:
    void func()
    {
        cout<<"\n This is base two function.";
    }
};

class derived:public Base_one, public Base_two
{

};

int main()
{
    derived d;
   // d.func();  //  error

   d.Base_one::func();
   d.Base_two::func();

   return 0;
}