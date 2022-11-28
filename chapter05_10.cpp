
// 2017 Fall 5.(a)
//  WAP to illustrate + operator to concatenate two string

#include <iostream>
#include <string.h>

using namespace std;

class String
{
public:
    char str[20];

public:
    void get_string()
    {
        cout<<"\n Enter String : ";
        cin>>str;
    }
    void display_string()
    {
        cout<<str;
    }
    String operator+(String ob) // Concatenating String
    {
        String temp;
       // strcat(temp.str, ob.str);
        strcpy(temp.str, str);
        strcat(temp.str, ob.str);
        return temp;
    }
};
int main()
{
    String str1, str2, str3;

    str1.get_string();
    str2.get_string();

    cout << "\n\n First String is :";
    str1.display_string(); // Displaying First String

    cout << "\n Second String is: ";
    str2.display_string(); // Displaying Second String

    str3 = str1 + str2; // String is concatenated. Overloaded '+' operator
    cout << "\n Concatenated String is: ";
    str3.display_string();

    return 0;
}