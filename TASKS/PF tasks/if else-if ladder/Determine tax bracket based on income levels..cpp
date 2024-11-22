#include <iostream>
using namespace std;

int main() {
    double income;
    cout << "Enter your income:";
    cin >> income;
    
    if (income < 10000) {
        cout << "Tax Bracket: 0% (Income below 10,000)" << endl;
    }
    else if (income >= 10000 && income < 20000) {
        cout << "Tax Bracket: 10% (10,000 to 19,999)" << endl;
    }
    else if (income >= 20000 && income < 50000) {
        cout << "Tax Bracket: 20% (20,000 to 49,999)" << endl;
    }
    else if (income >= 50000 && income < 100000) {
        cout << "Tax Bracket: 30% (50,000 to 99,999)" << endl;
    }
    else if (income >= 100000) {
        cout << "Tax Bracket: 40% (Income 100,000 and above)" << endl;
    }

    return 0;
}
