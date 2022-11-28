
// 2016 spring 5.(a)

// WAP to illustrate unary ++ operator overloading

#include <iostream>
using namespace std;

class calculation
{
    private:
    int a, b;

public:
    void getdata()
    {
        cout << "\n Enter Two Numbers : ";
      
        cin >> a;
      
        cin >> b;
    }
    void operator--() // Overload Unary Decrement
    {
        a--;
        b--;
    }
    void operator++() // Overload Unary Increment
    {
        a++;
        b++;
    }
    void display()
    {
        cout << "\n A : " << a;
        cout << "\n B : " << b;
    }
};

int main()
{
    calculation ob;
    ob.getdata();
    --ob;
    cout << "\n After Decrementing : ";
    ob.display();
    ++ob;
    ++ob;
    cout << "\n\n After Incrementing : ";
    ob.display();

    return 0;
}
