//Owen Zhao
//Homework #1: Input/Output and Variables
//09/23/24

#include <iostream>
#include <string>
using namespace std;

int main() {
    //Making variables for time to exercise, type of exercise, weight in kg, and calories burn goal
    string Exercise;
    double Minutes;
    double Weight;
    double Calories;

    //Making variables in order to make calculations for the amount of minutes needed to reach calorie burn goal
    double Math1;
    double Math2;

    //Letting user input what kind of exercise they want to do
    cout << "Which exercise are you trying to do? (Walk Slowly, Walk, Jogging) ";
    cin >> Exercise;

    //Letting user input wanted amount of calories to burn
    cout << "How many calories are you trying to burn? ";
    cin >> Calories;

    //Letting user input their weight in kg
    cout << "How much do you weigh in kilograms? ";
    cin >> Weight;

    //Outputs walking slowly and how many minutes are needed to reach calorie goals based on user inputs
    if (Exercise == "Walk Slowly")
    {
        Math1 = 200 * Calories;
        Math2 = 2 * 3.5 * Weight;
        Minutes = Math1 / Math2;
        cout << "The exercise you chose and the minutes needed to reach your calorie burning goal: " << Exercise << " " << Minutes << " Minutes";
    }

    //Outputs walking and how many minutes are needed to reach calorie goals based on user inputs
    else if (Exercise == "Walk")
    {
        Math1 = 200 * Calories;
        Math2 = 3 * 3.5 * Weight;
        Minutes = Math1 / Math2;
        cout << "The exercise you chose and the minutes needed to reach your calorie burning goal: " << Exercise << " " << Minutes << " Minutes";
    }

    //Outputs jogging and how many minutes are needed to reach calorie goals based on user inputs
    else if (Exercise == "Jogging")
    {
        Math1 = 200 * Calories;
        Math2 = 8.8 * 3.5 * Weight;
        Minutes = Math1 / Math2;
        cout << "The exercise you chose and the minutes needed to reach your calorie burning goal: " << Exercise << " " << Minutes << " Minutes";
    }

return 0;
}

/*
Which exercise are you trying to do? (Walk Slowly, Walk, Jogging) Jogging
How many calories are you trying to burn? 250
How much do you weigh in kilograms? 23
The exercise you chose and the minutes needed to reach your calorie burning goal: Jogging 70.5816 Minutes
*/