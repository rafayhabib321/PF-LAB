#include <iostream>
using namespace std;

int main() {
    int age;
    double income;

    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your monthly income: $";
    cin >> income;

    if (age >= 18 && age <= 65) { 
        if (income >= 2000) {  
            cout << "You are eligible for the loan." << endl;
        } else {
            cout << "Income is too low. You are not eligible for the loan." << endl;
        }
    } else {
        cout << "Age is not eligible. You are not eligible for the loan." << endl;
    }

    return 0;
}
