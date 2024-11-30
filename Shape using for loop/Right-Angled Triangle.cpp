#include <iostream>
using namespace std;

int main() {
    // Number of rows
    int n = 5;
	                                            // Loop to print the pattern
    for(int i = 1; i <= n; i++) {			 // Print '*' i times for each row 
        for(int j = 2; j <= i; j++) {
            cout << "*";
        }
        cout << endl;						// Move to the next line after each row
    }
    cout<<'\n';
    cout<<"Right angle triangle.";
    return 0;
}
