#include <iostream>
using namespace std;

int main() {
    int n = 5; // Side length of the square
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print '*' on borders or in the last row
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
      cout<<'\n';
    cout<<"Hollow Square.";
    return 0;
}
