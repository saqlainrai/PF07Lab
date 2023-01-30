#include <iostream>
using namespace std;

int totalTime(int number, int digit);

main()
{
    int number;
    int digit;

    cout << "Enter the Number: ";
    cin >> number;
    cout << endl ;

    cout << "Enter the Digit: ";
    cin >> digit;
    cout << endl ;

    cout << totalTime(number, digit);
}
int totalTime(int number, int digit)
{
    int count = 0 ;
    int result;
    while ( number > 0)
    {
        result = number % 10 ;
        number = number / 10 ;

        if ( result == digit )
        {
            count = count + 1;
        }
    }
    return count;
}