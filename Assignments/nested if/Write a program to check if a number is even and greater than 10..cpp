#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
   
        if (number > 10) {
            cout << "The number is even and greater than 10." << endl;
        } else {
            cout << "The number is even but not greater than 10." << endl;
        }
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
