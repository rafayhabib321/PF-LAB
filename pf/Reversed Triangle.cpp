#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
      cout<<'\n';
    cout<<"Reversed Triangle.";
    return 0;
}
