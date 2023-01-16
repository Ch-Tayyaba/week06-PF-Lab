#include<iostream>
#include<windows.h>
using namespace std;
float checkCost(string product ,string  city ,int  quantity); 
main()
{
    string city;
    string product;
    int quantity;
    float result;
    system ("cls");
    while(1)
    {
        cout << endl << endl;
        cout << "Enter Product : " ;
        cin >> product;
        cout << "Enter City : " ;
        cin >> city;
        cout << "Enter Quantity : ";
        cin >> quantity;
        result = checkCost(product , city , quantity);
        cout << "Your Price will be : " << result ;
    } 
}
float checkCost(string product ,string  city ,int  quantity)
{
    float price = 0;
    if(product == "coffee")
    {
        if(city == "sofia")
        {
            price = 0.50 * quantity;
        }
        if(city == "plovdiv")
        {
            price = 0.40 * quantity;
        }
        if(city == "varna")
        {
            price = 0.45 * quantity;          
        }
    }
    else if (product == "water")
    {
        if(city == "sofia")
        {
            price = 0.80 * quantity;
        }
        if(city == "plovdiv")
        {
            price = 0.70 * quantity;
        }
        if(city == "varna")
        {
            price = 0.70 * quantity;               
        }    
    }
        else if (product == "beer")
    {
        if(city == "sofia")
        {
            price = 1.20 * quantity;
        }
        if(city == "plovdiv")
        {   
            price = 1.15 * quantity;
        }
        if(city == "varna")
        {
            price = 1.10 * quantity;            
        }
    }
        else if (product == "sweets")
    {
        if(city == "sofia")
        {
            price = 1.45 * quantity;
        }
        if(city == "plovdiv")
        {
            price = 1.30 * quantity;
        }
        if(city == "varna")
        {
            price = 1.35 * quantity;            
        }
    }
        else if (product == "peanuts")
    {
        if(city == "sofia")
        {
            price = 1.60 * quantity;
        }
        if(city == "plovdiv")
        {
            price = 1.50 * quantity;
        }
        if(city == "varna")
        {
            price = 1.55 * quantity;            
        }
    }
    return price;
}
