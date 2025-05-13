#include <iostream>
using namespace std;
//  Calculating Area of a Circle

int main()
{
    float area, r;
    double pie = 3.14;
    cout << "the value of r:\n";
    cin >> r;
    area = pie * r * r;
    cout << "The area of the circle is: " << area;
    return 0;
}