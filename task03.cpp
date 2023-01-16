#include<iostream>
#include<windows.h>
using namespace std;

string giveTitle(char gender , int age );

main()
{
    int age;
    char gender;
    string title;
    system("cls");
    cout << "Enter your gender : ";
    cin >> gender;
    cout << "Enter your Age : ";
    cin >> age;
    title = giveTitle(gender , age );
    cout << "Your Title is :" << title;

}

string giveTitle(char gender , int age )
{
    if (age >= 16 && gender == 'm')
    {
        return "Mr.";
    }
    else if(age < 16 && gender == 'm' )
    {
        return "Master";
    }
    else if(age >= 16 && gender == 'f')
    {
        return "Ms.";
    }
    else if(age >= 16 && gender == 'f')
    {
        return "Miss";
    }
    else 
    {
        return "invalid_input";
    }
}



