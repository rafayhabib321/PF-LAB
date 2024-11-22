#include <iostream>
using namespace std;

int main() {
    int n = 9;
    // Upper part of the sand clock
    for (int i = n; i >= 1; i -= 2) {
        for (int j = 1; j <= (n - i) / 2; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    // Lower part of the sand clock
    for (int i = 3; i <= n; i += 2) {
        for (int j = 1; j <= (n - i) / 2; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
      cout<<'\n';
    cout<<"Sand Clock.";
    return 0;
}
