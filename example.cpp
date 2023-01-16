#include<iostream>
#include<windows.h>
using namespace std;
int isGreater(int num01 , int numo02 , int num03);

main()
{
	system("cls");
	int number01;
	int number02;
	int number03;
	int greater;
	cout << "Enter three numbers : " << endl;
	cin >> number01;
	cin >> number02;
	cin >> number03;
	greater = isGreater(number01 , number02 , number03);
	cout << "Greater number = " << greater;


}

int	isGreater(int num01 , int num02 , int num03)
{
	if(num01>num02 && num01>num03)
	{
		return num01; 
	}
	else if(num02>num01 && num02>num03)
	{
		return num02; 
	}
	else if(num03>num02 && num03>num01)
	{
		return num03; 
	}
	else
	{
		return 0;
	}				
}