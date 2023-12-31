#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a three-digit positive number: ";
    cin >> N;

    int digit1 = N / 100; 
    int digit2 = (N % 100) / 10; 
    int digit3 = N % 10;  

    int product = 1;
    if (digit1 % 2 != 0) {
        product *= digit1;
    }
    if (digit2 % 2 != 0) {
        product *= digit2;
    }
    if (digit3 % 2 != 0) {
        product *= digit3;
    }

    cout << "Digits of the number: " << digit1 << ", " << digit2 << ", " << digit3 << endl;
    cout << "Product of odd numbers: " << product << endl;

    return 0;
}
