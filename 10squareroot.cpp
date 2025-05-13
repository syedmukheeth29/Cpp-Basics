#include <iostream>
#include <cmath>
using namespace std;
// Finding Square Root in C++
int main()
{
    int number;
    cout << "Enter a number to find its square root:\n ";
    cin >> number;
    if (number < 0)
    {
        cout << "Square root of negative numbers is not defined in real numbers.\n";
    }
    else
    {
        double squareRoot = sqrt(number);
        cout << "The square root of " << number << " is: " << squareRoot << "\n";
    }

        return 0;
}
    