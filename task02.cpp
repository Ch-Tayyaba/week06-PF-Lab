#include<iostream>
#include<windows.h>
using namespace std;

float discount(string day , string month , float price);

main()
{
    float price;
    string day; 
    string month;
    float finalAmount;
    cout << "Enter price : ";
    cin >> price;
    cout << "Enter Day : "; 
    cin >> day;
    cout << "Enter Month : ";
    cin >> month;
    finalAmount = discount(day ,  month ,  price);
    cout << "Your Final Amount is " << finalAmount;

}
float discount(string day , string month , float price)
{
    float discountAmount = 0 , finalAmount;
    if(day == "sunday" && ( month == "october" || month == "march" || month == "august"))
    {
        discountAmount = 0.1 * price;
    }
    else if (day == "monday" && (month == "november" || month == "december"))
    {
        discountAmount = 0.05 * price;
    }
    finalAmount = price - discountAmount;
    return finalAmount;
}





