#include <iostream>
using namespace std;
// Example : Calculating Simple Interest

int main() {
    float principal, rate, time, simpleInterest;
    cout << "Enter the principal amount,rate,time : \n";
    cin >> principal >> rate >> time;
    simpleInterest = (principal * rate * time) / 100;
    cout << "The Simple Interest is: " << simpleInterest << "\n";
    return 0;
}