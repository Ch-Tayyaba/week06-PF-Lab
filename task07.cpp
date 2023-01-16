#include<iostream>
#include<windows.h>
using namespace std;
bool sameNumber(int num01 , int num02 , int num03);
main()
{
    int number01;
    int number02;
    int number03;
    bool result;
    system("cls");
    cout << "Enter three numbers : " << endl;
    cin >> number01;
    cin >> number02;
    cin >> number03;
    result = sameNumber(number01 , number02 , number03);
    if(result == true)
    {
        cout << "Output :  Yes";
    }
    else
    {
        cout << "Output : No";
    }

}
bool sameNumber(int num01 , int num02 , int num03)
{
    if((num01 == num02 && num01 == num03) || (num02 == num01 && num02 == num03) || (num03 == num01 && num03 == num02))
    {
        return true;
    }
    else
    {
        return false;
    }
}