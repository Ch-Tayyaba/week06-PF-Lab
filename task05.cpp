#include<iostream>
using namespace std;
float income(string screenType , float seats);


main()
{
    string screen;
    float totalIncome;
    int numberOfSeats;
    int rows;
    int columns;
    cout<< "Enter Type of screen : ";
    cin >> screen;
    cout << "Enter Number of Rows : ";
    cin >> rows;
    cout << "Enter Number of Columns : ";
    cin >> columns;
    numberOfSeats = rows * columns;
    totalIncome =  income( screen , numberOfSeats);
    cout << "Total income will be : " << totalIncome;

}
float income(string screenType , float seats)
{
    if (screenType == "premiere")
    {
        return seats * 12.00;
    }
    else if (screenType == "normal")
    {
        return seats * 7.50;
    }
    else if (screenType == "discount")
    {
        return seats * 5.00;
    }
    else 
    {
        return 0;
    }
}