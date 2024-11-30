#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    for (int i = n; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
     cout<<'\n';
    cout<<"Inverted Pyramid.";
    
    return 0;
}
