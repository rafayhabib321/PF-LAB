#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = n - i + 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
      cout<<'\n';
    cout<<"Inverted Triangle Numbers.";
    return 0;
}
