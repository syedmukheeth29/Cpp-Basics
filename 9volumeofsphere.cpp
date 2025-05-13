#include <iostream>
using namespace std;
// Homework : Calculate Volume of a Sphere
int main()
{
    float volume, radius;
    double pi = 3.14;
    cout << "Enter the radius of the sphere:\n ";
    cin >> radius;
    volume = (4.0 / 3.0) * pi * radius * radius * radius; // Volume formula: (4/3)πr³
    cout << "The volume of the sphere is: " << volume << "\n";
    return 0;
}