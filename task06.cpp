#include<iostream>
using namespace std;
float price(float kilometers , string time);
main()
{
    float kilometers;
    string time;
    float finalPrice;
    while(1)
    {
    cout << "Enter Kilometers : ";
    cin >> kilometers;
    cout << "Enter Time : ";
    cin >> time;
    finalPrice = price( kilometers ,time);
    cout << "Your prce will be : " << finalPrice ;
    cout << endl << endl;    
    }
}
float price(float kilometers , string time)
{
    if(kilometers < 20 && time == "day")
    {
        return (kilometers * 0.79) + 0.70;  
    }
    else if(kilometers < 20 && time == "night")
    {
        return (kilometers * 0.90) + 0.70;  
    }
    else if((kilometers >= 20 && kilometers <= 100)  && (time == "day" || time == "night"))
    {
        return (kilometers * 0.09);  
    } 
    else if(( kilometers > 100)  && (time == "day" || time == "night"))
    {
        return (kilometers * 0.06) ;  
    } 
    return 0;
}  