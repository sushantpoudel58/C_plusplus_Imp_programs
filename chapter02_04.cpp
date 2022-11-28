//static data members and static data functions
#include<iostream>
#include<conio.h>
using namespace std;
class A{
    private:
    static int num;//static data member 

public:

static void disp()//static member function
  {
   num++;
}
int show(){
    return num;
}
};
int A::num;//declareration of static data member
int main(){
    
    A obj;
    cout<<"before function call"<<obj.show();
    A::disp();//static data member only can be access by scopce restion oprator and class name
    A::disp();
    cout<<"after function call"<<obj.show();

}