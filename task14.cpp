#include <iostream>
using namespace std;

float calculateMoney(float age, float price, float toy);

main()
{
    system("cls");

    float age, price, toy;
    float result;

    cout << "Enter Lilly's Age: ";
    cin >> age;
    cout << endl;

    cout << "Enter the Price of Washing Machine: ";
    cin >> price;
    cout << endl;

    cout << "Enter the Price of Toy: ";
    cin >> toy;
    cout << endl;

    result = calculateMoney(age, price, toy);

    if ( result >= 0)
    {
        cout << "Yes! " << endl ;
        cout << "Remaining amount: "<<result;
    }
    else
    {
        cout << "No! " << endl ;
        cout << "Required Amount: "<<result * -1;
    }

    cout << endl ;

}
float calculateMoney(float age, float price, float toy)
{
    float counter1=0, counter2=0;
    float toysprice, inimoney, finalmoney, summoney=0, available, moneygot=0;

    // to separate even and odd birthdays
    for (int count = 1; count <= age ; count++)
    {
        if ( count % 2 == 0 )
        {
            counter1 = counter1 + 1 ;
            summoney = summoney + 10 ;

            moneygot = summoney + moneygot ;
        }
        else
        {
            counter2 = counter2 + 1 ;
        }

    }

    // Performed Calculation
    toysprice = counter2 * toy ;
    inimoney = moneygot - counter1 ;
    finalmoney = inimoney + toysprice ;
    available = finalmoney - price ;

    // final price she should have or left
    return available ;

}