#include <iostream>
using namespace std;

int main() {
    int n = 4;  // Number of rows and columns
    int arr[n][n];
    int start = 7;  // Starting number for the first element
    int end = 16;   // Last number

    // Filling the array with the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {
                arr[i][j] = start--;  // Decrease for even indexed columns
            } else {
                arr[i][j] = end--;    // Increase for odd indexed columns
            }
        }
    }

    // Printing the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
      cout<<'\n';
    cout<<"Spiral Matrix.";

    return 0;
}
