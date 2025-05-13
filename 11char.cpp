#include <iostream>
using namespace std;

int main()
{
char ch='a';
char ch1='A';
char ch2='1';
char ch3='!';
char ch4=' ';
cout << "The value of ch is: " << static_cast<int>(ch) << "\n";
cout << "The value of ch1 is: " << static_cast<int>(ch1) << "\n";
cout << "The value of ch2 is: " << static_cast<int>(ch2) << "\n";
cout << "The value of ch3 is: " << static_cast<int>(ch3) << "\n";
cout << "The value of ch4 is: " << static_cast<int>(ch4) << "\n";

return 0;
}