#include <iostream>
using namespace std;

float calculatePrice(float inheritance, float year);

main()
{
    system("cls");

    float inheritance, year;
    float result, fyear, totalage;
    float evenmoney, oddmoney, oddyear, done;
    int counter1 = 0;
    int counter2 = 0;

    cout << "Enter the Inherited Money: ";
    cin >> inheritance;
    cout << endl;

    cout << "Enter the Year : ";
    cin >> year;
    cout << endl;

    // difference of year w.r.t 1800
    fyear = (year - 1799);

    // sum of his total age till that year
    totalage = fyear + 18;

    for (int x = 0; x < fyear; x++)
    {
        if (x % 2 == 0)
        {
            // no of even years he will have to survive
            counter1 = counter1 + 1;
        }
        else
        {
            // no of odd years he will have to survive
            counter2 = counter2 + 1;
        }
    }

    // cout << counter1 <<endl;
    // cout << counter2 <<endl;

    evenmoney = counter1 * 12000;
    oddmoney = 0;
    int ageincrement = 19 ;
    
    for (int y = 1; y <= counter2; y++)
    {
        done =(12000 + ( 50 * ageincrement ));
        ageincrement = ageincrement + 2 ;
        oddmoney = oddmoney + done ;
    }

    result = inheritance - (evenmoney + oddmoney);

    if (result >= 0)
    {
        cout << "Yes! He will survive" << endl;
        cout << result << " Money will be left";
    }
    else
    {
        cout << "No! he will require more money" << endl;
        cout << result * -1 << " Will be required";
    }

}
// evenyear will constribute 12000
// oddyear will compromise 12000 + 50*(age in the year)