
 //2013 spring 4.(a)  3rd part

 #include<iostream>
 using namespace std;

 class x
 {
    public:
    x()
    {
        cout<<"\n This is base class x";
    }
 };

 class y:public x
 {
    // no data member inside y
    public:
    y()
    {
        cout<<"\n This is derived class y ";
    }
 };

 int main()
 {
    y obj;

    return 0;
 }