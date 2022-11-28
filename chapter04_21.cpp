
// Example program to show friendship

// Friendship can access all types of data member (private also) of a class

#include<iostream>

using namespace std;

class laptop
{
    private:
    float a;

    protected:
    float b;

    public:
    void setdata()
    {
        cout<<"\n Enter values of a and b:";
        cin>>a>>b;
    }
    friend class mobile;
    
};

class mobile
{
    public:
    void display(laptop ob1)
    {
        cout<<"\n The first number is :"<<ob1.a;
        cout<<"\n The second number is :"<<ob1.b;
    }
};

int main()
{
    laptop ob1;
    mobile ob2;
    ob1.setdata();
    ob2.display(ob1);

    return 0;
}