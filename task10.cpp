#include<iostream>
using namespace std;
float vollyBall(float p , float h , string year);
main()
{
    string year;
    float p;
    float h;
    int finalWeeks;
    cout << "Enter type of year : ";
    cin >> year;
    cout << "Enter holidays except Sunday : ";
    cin >> p;
    cout << "Enter Weekends when go home town : ";
    cin >> h;
    finalWeeks = vollyBall( p , h , year); 
    cout << "Valdimir will play volley ball " << finalWeeks << " times ";
}
float vollyBall(float p , float h , string year)
{
    float weeks = 48;
    float totalPlay;
    float playedInHolidays;
    float playedInWeekends;
    float playedInSofia;
    playedInHolidays = (0.6667)*(p);
    playedInWeekends = (0.75)*(weeks - h);
    playedInSofia = h;
    totalPlay = playedInHolidays + playedInWeekends + playedInSofia;

    if(year == "leap")
    {
        totalPlay = totalPlay + (0.15 * totalPlay);
    }
    return totalPlay;

}