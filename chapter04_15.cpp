

//2014 Fall 3.(b)

#include<iostream>
#include<string.h>

using namespace std;

class Names
{
    public:
    char name[20];

    
    void get_namedata()
    {
        cout<<"\n Enter name:";
        cin>>name;
    }
    void display_namedata()
    {
        cout<<"\n Name :"<<name;
    }
};

class Addresses
{
    private:
    char addr[20];
    // Names na;     // creating object of another class // containership

    public:
     Names na;      //  "      "    "        "         "         "

    void get_addressdata()
    {
        na.get_namedata();      // declaring input function of another class

        cout<<"\n Enter address:";
        cin>>addr;
    }
    void display_addressdata()
    {
        na.display_namedata();
        
        cout<<"\n Address :"<<addr;
    }

    void concatenate()
    {
        strcat(na.name,addr);

        cout<<"\n Name and Address of person :"<<na.name;
    }

};

int main()
{
    Addresses ob;
    ob.get_addressdata();
    ob.display_addressdata();
    ob.concatenate();

    return 0;
}