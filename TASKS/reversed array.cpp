#include <iostream>
using namespace std;

int main() {
    int arr[5], reversed[5];

    // Input array
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    for (int i = 0; i < 5; i++) {
        reversed[i] = arr[3 - i];
    }

    // Display reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < 5; i++) {
        cout << reversed[i] << " ";
    }
    cout << endl;

    return 0;
}
