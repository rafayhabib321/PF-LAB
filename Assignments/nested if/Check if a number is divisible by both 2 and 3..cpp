#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        if (number % 3 == 0) {
            cout << "The number is divisible by both 2 and 3." << endl;
        } else {
            cout << "The number is divisible by 2 but not by 3." << endl;
        }
    } else {
        cout << "The number is not divisible by 2." << endl;
    }

    return 0;
}
