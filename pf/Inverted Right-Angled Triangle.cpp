#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
     cout<<'\n';
    cout<<"Inverted Right-Angled Triangle.";
    return 0;
}
