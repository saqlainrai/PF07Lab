#include <iostream>
using namespace std;

int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);

main()
{
    int number1, number2;
    int gcd, lcm;

    cout << "Enter First Number: ";
    cin >> number1;
    cout << endl;

    cout << "Enter Second Number: ";
    cin >> number2;
    cout << endl;

    gcd = calculateGCD(number1, number2);
    cout << gcd;
    lcm = calculateLCM(number1, number2, gcd);

    cout << "The LCM is: " << lcm << endl;
}
int calculateGCD(int number1, int number2)
{
    int result1, result2;
    int answer1, answer2;
    int returnresult;
    for (int count = 1; count <= number1; count++)
    {
        result1 = number1 % count;

        if (result1 == 0)
        {
            answer1 = count;
        }
        result2 = number2 % count;

        if (result2 == 0)
        {
            answer2 = count;
        }
        if (answer1 == answer2)
        {
            returnresult = answer1;
        }
    }
    return returnresult;
}
int calculateLCM(int number1, int number2, int gcd)
{
    int lcm;

    lcm = (number1 * number2) / gcd;
}