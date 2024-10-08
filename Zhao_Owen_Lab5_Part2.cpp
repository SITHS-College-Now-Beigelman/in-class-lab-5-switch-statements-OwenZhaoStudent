//Owen Zhao
//Homework #1: Input/Output and Variables
//09/23/24

#include <iostream>
#include <string>
using namespace std;

int main() {
    //Making the variables for gigabytes
    string Music;
    double Gigabytes;
    double Megabytes;
    double Time;

    //Asking user to input what quality of music they are trying to download
    cout << "Do you want to download Low, Normal, or High quality music? ";
    cin >> Music;

    //Asking user how many gigabytes are in their monthly hotspot plan
    cout << "How many gigabytes are in your monthly hotspot plan? ";
    cin >> Gigabytes;

    if (Music == "Low")
    {
        Megabytes = Gigabytes * 1000;
        Time = Megabytes / 43.2;
        cout << "You can stream low quality music for " << Time << " hours this month. ";
    }

    if (Music == "Normal")
    {
        Megabytes = Gigabytes * 1000;
        Time = Megabytes / 72;
        cout << "You can stream normal quality music for " << Time << " hours this month. ";
    }

    if (Music == "High")
    {
        Megabytes = Gigabytes * 1000;
        Time = Megabytes / 115.2;
        cout << "You can stream high quality music for " << Time << " hours this month. ";
    }

return 0;
}