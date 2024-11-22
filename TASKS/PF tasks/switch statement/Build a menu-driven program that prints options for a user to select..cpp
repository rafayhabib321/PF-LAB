#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        // Display the menu
        cout << "\nMenu:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Switch statement to perform actions based on user choice
        switch (choice) {
            case 1: // Add
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;

            case 2: // Subtract
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;

            case 3: // Multiply
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;

            case 4: // Divide
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                // Handle division by zero
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;

            case 5: // Exit
                cout << "Exiting the program. Goodbye!" << endl;
                return 0; // Exit the program

            default: // Invalid choice
                cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
        }
    }

    return 0;
}
