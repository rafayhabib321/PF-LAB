#include <iostream>
using namespace std;

int main() {
    int num = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
      cout<<'\n';
    cout<<"Staggered Numbers.";
    return 0;
}
