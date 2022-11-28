
// 2015 spring 6.(b)   


//Program to illustrate to pure virtual function / or arko  program guide page number 123 maa  ni  xa


#include <iostream>

using namespace std;

class BaseClass // Abstract class
{

public:
    virtual void Display1() = 0; // Pure virtual function or abstract function

    virtual void Display2() = 0; // Pure virtual function or abstract function

    void Display3()
    {
        cout << "\n\tThis is Display3() method of Base Class";
    }
};

class DerivedClass : public BaseClass
{

public:
    void Display1()
    {
        cout << "\n\tThis is Display1() method of Derived Class";
    }

    void Display2()
    {
        cout << "\n\tThis is Display2() method of Derived Class";
    }
};

int main()
{

    DerivedClass D;

    D.Display1(); // This will invoke Display1() method of Derived Class
    D.Display2(); // This will invoke Display2() method of Derived Class
    D.Display3(); // This will invoke Display3() method of Base Class

    return 0;
}
