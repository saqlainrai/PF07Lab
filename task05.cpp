#include <iostream>
using namespace std;

int totalDigits(int number);

main()
{
    int number, output;
    cout << "Enter the Number: ";
    cin >> number;

    cout << totalDigits(number);
}
int totalDigits(int number)
{
    // int result = number ;
    // int count = 1 ;
    // while ( result > 10)
    // {
    //     count=count+1;
    //     result = result / 10 ;
    // }
    // return count;

    int count = 0 ;
    while ( number != 0)
    {
        count=count+1;
        number = number / 10 ;
    }
    return count;
}