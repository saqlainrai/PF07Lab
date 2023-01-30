#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter the Number: ";
    cin >> number;

    int n0, n1;
    cin >> n0;
    cin >> n1;
    

    cout << n0 << ", " << n1 ;
    for (int count = 1; count <= number-2; count++)
    {
        int result = n0 + n1 ;
        
        cout << ", " << result ;

        n0 = n1 ;
        n1 = result ;
    }
}