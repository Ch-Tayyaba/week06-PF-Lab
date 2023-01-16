#include<iostream>
#include<windows.h>
using namespace std;

char grading(int marks);

main()
{
    int marks;
    char grade;
    system("cls");
    cout << "Enter your marks : ";
    cin >> marks;
    grade = grading(marks);
    cout << "Your grades are : " << grade;

}
char grading(int marks)
{
    if(marks > 85)
    {
        return 'A';
    }
    else if(marks <= 85 && marks >= 81 )
    {
        return 'B';
    }
    else if(marks <= 80 && marks >= 71 )
    {
        return 'C';
    }
    else if(marks <= 70 && marks >= 61 )
    {
        return 'D';
    }
    else if(marks <= 60 && marks >= 50 )
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}
