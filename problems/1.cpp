#include <iostream>
using namespace std;
// Write a C++ program to declare all basic data types and print their sizes using sizeof().
int main()
{
    int i;
    float f;
    char c;
    double d;
    bool b;
    short s;
    long l;
    long long ll;
    unsigned int ui;
    unsigned long ul;
    unsigned long long ull;
    wchar_t wc;
    signed char sc;
    signed short ss;
    signed long sl;
    signed long long sll;
    // Print the sizes of each data type
    cout << "Size of int: " << sizeof(i) << " bytes" << endl;
    cout << "Size of float: " << sizeof(f) << " bytes" << endl;
    cout << "Size of char: " << sizeof(c) << " bytes" << endl;
    cout << "Size of double: " << sizeof(d) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(b) << " bytes" << endl;
    cout << "Size of short: " << sizeof(s) << " bytes" << endl;
    cout << "Size of long: " << sizeof(l) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(ll) << " bytes" << endl;
    cout << "Size of unsigned int: " << sizeof(ui) << " bytes" << endl;
    cout << "Size of unsigned long: " << sizeof(ul) << " bytes" << endl;
    cout << "Size of unsigned long long: " << sizeof(ull) << " bytes" << endl;
    cout << "Size of wchar_t: " << sizeof(wc) << " bytes" << endl;
    cout << "Size of signed char: " << sizeof(sc) << " bytes" << endl;
    cout << "Size of signed short: " << sizeof(ss) << " bytes" << endl;
    cout << "Size of signed l: " << sizeof(sl) << " bytes" << endl;
    cout << "Size of signed ll: " << sizeof(sll) << " bytes" << endl;
    return 0;
}