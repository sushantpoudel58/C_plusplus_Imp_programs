

//

#include <iostream>
#include <conio.h>

using namespace std;
class C;
class B;

class A
{
private:
      int a;

public:
    void name()
    {
        cout << "enter 1st num"<<endl;
        cin >> a;
    }
        friend void compare(A,B,C);
};

class B
{
private:
    int b;

public:
    void name1()
    {
        cout << "enter 2nd num" << endl;
        cin >> b;
    }
    friend void compare(A,B,C);
};
class C
{
private:
    int c;

public:
    void name2()
    {
        cout << "enter 3rd num" << endl;
        cin >> c;
    }
    friend void compare(A,B,C);
};
void compare(A obj,B obj2,C obj3){
    int d;
     cout << "enter 4th  num" << endl;
        cin >> d;
        if(obj.a>obj2.b && obj.a>obj3.c && obj.a>d){
            cout<<"a is greatest";
        }
        else if(obj2.b>obj.a && obj2.b>obj3.c && obj2.b>d){
            cout<<"b is greatest";

        }
       else if(obj3.c>obj.a && obj3.c>obj2.b && obj3.c>d)
       {
            cout<<"c is greatest";

       }
       else{
            cout<<"d is greatest";

       }
}
void main(){
    A obj;
    B obj2;
    C obj3;
    obj.name();
    obj2.name1();
    obj3.name2();
    compare(obj,obj2,obj3);

    //return 0;
    getch();
}