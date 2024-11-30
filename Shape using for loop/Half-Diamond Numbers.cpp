#include <iostream>
using namespace std;

int main() {
    int n = 5;
    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
      cout<<'\n';
    cout<<"Half-Diamond Numbers.";
    return 0;
}
