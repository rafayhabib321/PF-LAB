#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
      
        if (number % 2 == 0) {
            cout << "The number is positive and even.\n";
        } else {
            cout << "The number is positive but not even.\n";
        }
    } else {
        cout << "The number is not positive.\n";
    }

    return 0;
}
