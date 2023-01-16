#include<iostream>
#include<windows.h>
using namespace std;
string checkSpeed(float);

main()
{
    float speed;
    string info;
    system("cls");
    while(1)
    {
        cout << endl;
        cout << "Enter speed : ";
        cin >> speed;
        info = checkSpeed(speed);
        cout << "Speed Information  : " << info;
    }    
}
string checkSpeed(float speed)
{
    if (speed <= 10)
    {
        return "slow";
    }
    else if(speed > 10 && speed <= 50)
    {
        return "average";
    }
    else if(speed > 50 && speed <= 150)
    {
        return "fast";
    }
    else if(speed > 150 && speed <= 1000)
    {
        return "ultra-fast";
    }
    else
    {
        return "extremely-fast";
    }
}