#include <iostream>
using namespace std;

main()
{
    int number;

    cout << "Enter Integer till you want to sum(0-100): ";
    cin >> number;
    cout << endl;

    int sum = 0;

    for (int x = 0; x <= number; x++)
    {

        sum = sum + x;
    }

    cout << "The Sum is: " << sum;
}