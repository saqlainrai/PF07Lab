#include <iostream>
using namespace std;

void printPercentage(int number);

main()
{
    int number;
    int gcd, lcm;

    cout << "Enter the Number: ";
    cin >> number;
    cout << endl;

    printPercentage(number);

}
void printPercentage(int number)
{
    float count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    float number1;
    float r1, r2, r3, r4, r5;

    for (int count = 1; count <= number; count++)
    {

        cout << "Enter Number: ";
        cin >> number1;
        cout << endl;

        if (number1 >= 1 && number1 < 200)
        {
            count1 = count1 + 1;
        }
        else if (number1 >= 200 && number1 < 400)
        {
            count2 = count2 + 1;
        }
        else if (number1 >= 400 && number1 < 600)
        {
            count3 = count3 + 1;
        }
        else if (number1 >= 600 && number1 < 800)
        {
            count4 = count4 + 1;
        }
        else if (number1 >= 800 && number1 <= 1000)
        {
            count5 = count5 + 1;
        }
    }

    r1 = (count1 * 100 ) / number;
    r2 = (count2 * 100 ) / number;
    r3 = (count3 * 100 ) / number;
    r4 = (count4 * 100 ) / number;
    r5 = (count5 * 100 ) / number;

    cout << "p1: " << r1 <<"%"<< endl;
    cout << "p2: " << r2 <<"%"<< endl;
    cout << "p3: " << r3 <<"%"<< endl;
    cout << "p4: " << r4 <<"%"<< endl;
    cout << "p5: " << r5 <<"%"<< endl;
}