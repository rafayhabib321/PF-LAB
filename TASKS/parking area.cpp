#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0.0;

    cout << "Enter number of units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 1;
    } else if (units <= 300) {
        bill = 100 * 1 + (units - 100) * 2;
    } else {
        bill = 100 * 1 + 200 * 2 + (units - 300) * 3;
    }

    cout << "Total electricity bill: $" << bill << endl;
    return 0;
}
