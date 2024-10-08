//Owen Zhao
//Lab #5: If/Switch Statements
//10/08/24

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    int direct;
    int i;
    int Step;
    int North;
    int South;
    int East;
    int West;
    int NS = 0;
    int EW = 0;

    for (i = 1; i <= 25 ; i++)
    {
    srand(time(0));
    direct = rand() % 4;

    switch(direct)
    {
        case 1:
        NS = NS + 1;
        if (NS > 0);
        {
            cout << "The robot is " << NS << " steps North of the starting point " << endl;
        }

        else if ()
        {
            cout << "The robot "
        }
        case 2:
        NS = NS - 1;
        if(NS < 0);
        {
            cout << "The robot is " << NS * -1 << " steps South of the starting point " << endl;
        }
        case 3:
        EW = EW + 1;
        if(EW > 0);
        {
            cout << "The robot is " << NS * -1 << " steps East of the starting point " << endl;
        }
        case 4:
        EW = EW - 1;
        if(EW < 0);
        {
            cout << "The robot is " << NS * -1 << " steps West of the starting point " << endl;
        }
    }

    }

return 0;
}