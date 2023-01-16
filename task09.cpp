#include<iostream>
using namespace std;
float money(string category , float numberOfPeople , float budget);

main()
{
    float budget;
    string category;
    int numberOfPeople;
    float finalAmount;
    cout << endl << endl;
    cout << "Enter Your budget : ";
    cin >> budget;
    cout << "Enter Category : ";
    cin >> category;
    cout << "Enter Number of Members : ";
    cin >> numberOfPeople;
    finalAmount = money(category , numberOfPeople ,budget);
    if (finalAmount < 0 )
    { finalAmount = (-1) * finalAmount;
        cout << "NOT enought money! You need " << finalAmount << " QR .";
    }
    else 
    {
       cout << "YES! You have  " << finalAmount << "QR left.";
       }
}

float money(string category , float numberOfPeople , float budget)
{
    float budget01;
    float budget02;
    float ticketPrice;
    float finalAmount;
    if(category == "VIP")
    {
        if(numberOfPeople >= 1 && numberOfPeople <= 4)
        {
            budget01 = 0.75 * budget;
            budget02 =budget - budget01;
            ticketPrice = numberOfPeople * 499.99;
            finalAmount = budget02 - ticketPrice;
        }
        else if(numberOfPeople >= 5 && numberOfPeople <= 9)
        {
            budget01 = 0.60 * budget;
            budget02 =budget - budget01;
            ticketPrice = numberOfPeople * 499.99;
            finalAmount = budget02 - ticketPrice;
        }
        else if(numberOfPeople >= 10 && numberOfPeople <= 24)
        {
            budget01 = 0.50 * budget;
            budget02 =budget - budget01;
            ticketPrice = numberOfPeople * 499.99;
            finalAmount = budget02 - ticketPrice;
        }
        else if(numberOfPeople >= 25 && numberOfPeople <= 49)
        {
            budget01 = 0.40 * budget;
            budget02 =budget - budget01;
            ticketPrice = numberOfPeople * 499.99;
            finalAmount = budget02 - ticketPrice; 
        }
        else if(numberOfPeople >= 50)
        {
            budget01 = 0.25 * budget;
            budget02 =budget - budget01;
            ticketPrice = numberOfPeople * 499.99;
            finalAmount = budget02 - ticketPrice;
        }
        return finalAmount;
    }
    else if (category == "normal")
    {
        if(numberOfPeople >= 1 && numberOfPeople <= 4)
        {
            budget01 = 0.75 * budget;
            budget02 =budget - budget01;
            ticketPrice = numberOfPeople * 249.99;
            finalAmount = budget02 - ticketPrice;
        }
        else if(numberOfPeople >=  5 && numberOfPeople <= 9)
        {
            budget01 = 0.60 * budget;
            budget02 =budget - budget01;
            ticketPrice = numberOfPeople * 249.99;
            finalAmount = budget02 - ticketPrice;
        }
        else if(numberOfPeople >= 10 && numberOfPeople <= 24)
        {
            budget01 = 0.50 * budget;
            budget02 =budget - budget01;
            ticketPrice = numberOfPeople * 249.99;
            finalAmount = budget02 - ticketPrice;
        }
        else if(numberOfPeople >= 25 && numberOfPeople <= 49)
        {
            budget01 = 0.40 * budget;
            budget02 =budget - budget01;
            ticketPrice = numberOfPeople * 249.99;
            finalAmount = budget02 - ticketPrice;
          
        }
        else if(numberOfPeople >= 50)
        {
            budget01 = 0.25 * budget;
            budget02 =budget - budget01;
            ticketPrice = numberOfPeople * 249.99;
            finalAmount = budget02 - ticketPrice;
        }
        
    } 
    return finalAmount ;
   
}