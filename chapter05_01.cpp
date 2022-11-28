
// Compile time polymorphism
// function overloading
/*
#include<iostream>

using namespace std;

class calculate_sum
{
    public:
    int sum(int x, int y)
    {
        return(x+y);
    }

    int sum(int x, int y, int z)
    {
        return(x+y+z);
    }
};

int main()
{
    calculate_sum ob;

    cout<<"\n Sum of two integers is:"<<ob.sum(2,3);
    cout<<"\n Sum of three integers is:"<<ob.sum(2,3,4);

    return 0;
}
*/

#include<iostream>

using namespace std;

class calculate_sum
{
    private:
    int x, y , z;

    public:
    void display( int x, int y)
    {
        cout<<"The sum is:"<<x+y;
    }
    void display(int x, int y, int z)
    {
        cout<<"\n The sum is:"<<x+y+z;
    }
};

int main()
{
    calculate_sum ob;
    ob.display(2,5);
    ob.display(2,5,3);

    return 0;
}