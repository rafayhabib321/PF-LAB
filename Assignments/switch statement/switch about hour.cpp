#include <iostream>
using namespace std;

int main() {
    int hour;

    cout << "Enter an hour (0-24): ";
    cin >> hour;

    if (hour < 0 || hour > 24) {
        cout << "Invalid input! Please enter a number between 0 and 24." << endl;
        return 1; 
    }

    switch(hour) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 20:
        case 21:
        case 22:
        case 23:
            cout << "Night" << endl;
            break;

        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            cout << "Morning" << endl;
            break;

        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
            cout << "Afternoon" << endl;
            break;

        case 17:
        case 18:
        case 19:
            cout << "Evening" << endl;
            break;

        default:
            cout << "Invalid hour." << endl;
    }

    return 0;
}
