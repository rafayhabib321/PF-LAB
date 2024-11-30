#include <iostream>
using namespace std;

int main() {
    int num = 1;  // Starting number
    int n = 5;  // Number of rows

    for (int i = 1; i <= n; i++) {  // Loop through rows
        for (int j = 1; j <= i; j++) {  // Loop through columns for each row
            if (j == 1 || j == i) {
                cout << num++;  // Print the number at the start and end of the row
            } else {
                cout << "   ";  // Print spaces in between the numbers
            }
        }
        cout << endl;  // Move to the next line after each row
    }
      cout<<'\n';
    cout<<"Number Pyramid with Gaps.";

    return 0;
}
