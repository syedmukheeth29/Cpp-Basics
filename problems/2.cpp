#include <iostream>
using namespace std;
// 2.	Declare a const integer and try modifying it. What happens?
int main()
{
    const int myluckynois = 29;
    cout << "The lucky number is: " << myluckynois << endl;
    // int anotherLuckyNois=5;
    int myluckynois = 5;
    // you get an error because you are trying to modify a const variable
    // const does not modified by just updating the no, devil trick "use pointer"(in future i will use)
    cout << "Another lucky number is: " << myluckynois << endl;
    return 0;
}