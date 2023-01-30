#include <iostream>
using namespace std;

int digitSum(int number);

main()
{
    int number;

    cout << "Enter the Number: ";
    cin >> number;
    cout << endl;

    cout << digitSum(number);
}
int digitSum(int number)
{
    int sum = 0;
    int result;

    while (number > 0)
    {
        result = number % 10;
        number = number / 10;

        sum = result + sum;
    }
    return sum;
}