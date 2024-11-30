#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == i) cout << j;
            else cout << j << "*";
        }
        cout << endl;
    }
      cout<<'\n';
    cout<<"Triangle with Stars and Numbers.";
    return 0;
}
