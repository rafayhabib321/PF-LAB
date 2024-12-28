#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // For formatting output
#include <thread> // For sleep
#include <chrono> // For sleep duration
using namespace std;

// Structure to hold user information
struct User {
    string name;
    string password;
    double balance;
};

// Function prototypes
void registerUser(vector<User>& users);
void displayUsers(const vector<User>& users);
User* authenticateUser(vector<User>& users);
void atmSystem(vector<User>& users);

// Function to register a new user
void registerUser(vector<User>& users) {
    User newUser;

    cout << "Enter your name: ";
    cin >> newUser.name;

    cout << "Enter your password: ";
    cin >> newUser.password;

    cout << "Enter your balance: ";
    cin >> newUser.balance;

    users.push_back(newUser);
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Wait for 2 seconds
    cout << "User registered successfully!\n";
}

// Function to display all registered users
void displayUsers(const vector<User>& users) {
    if (users.empty()) {
        cout << "No users registered yet.\n";
        return;
    }

    cout << "\nRegistered Users:\n";
    for (const auto& user : users) {
        cout << "Name: " << user.name << ", Balance: $" << fixed << setprecision(2) << user.balance << "\n";
    }
}

// Function to find a user by name and password
User* authenticateUser(vector<User>& users) {
    string name, password;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your password: ";
    cin >> password;

    for (auto& user : users) {
        if (user.name == name && user.password == password) {
            return &user;
        }
    }

    cout << "Authentication failed. Please try again.\n";
    return nullptr;
}

// Function to handle ATM operations
void atmSystem(vector<User>& users) {
    User* user = authenticateUser(users);
    if (!user) return;

    int choice;
    do {
        cout << "==========================================\n";
        cout << "               Welcome to ATM              \n";
        cout << "==========================================\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit ATM\n";
        cout << "==========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nYour current balance is: $" << fixed << setprecision(2) << user->balance << "\n";
                break;
            case 2: {
                double depositAmount;
                cout << "Enter amount to deposit: ";
                cin >> depositAmount;
                if (depositAmount > 0) {
                    user->balance += depositAmount;
                    cout << "\nDeposit successful. Your new balance is: $" << fixed << setprecision(2) << user->balance << "\n";
                } else {
                    cout << "\nInvalid amount.\n";
                }
                break;
            }
            case 3: {
                double withdrawAmount;
                cout << "Enter amount to withdraw: ";
                cin >> withdrawAmount;
                if (withdrawAmount > 0 && withdrawAmount <= user->balance) {
                    user->balance -= withdrawAmount;
                    cout << "\nWithdrawal successful. Your new balance is: $" << fixed << setprecision(2) << user->balance << "\n";
                } else {
                    cout << "\nInvalid amount or insufficient balance.\n";
                }
                break;
            }
            case 4:
                cout << "\nExiting ATM. Thank you for using our service!\n";
                break;
            default:
                cout << "\nInvalid choice. Please try again.\n";
        }

        if (choice != 4) {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
        }
    } while (choice != 4);
}

int main() {
    vector<User> users;
    int choice;

    do {
        cout << "\n==========================================\n";
        cout << "                Main Menu                 \n";
        cout << "==========================================\n";
        cout << "1. Register User\n";
        cout << "2. Display All Users\n";
        cout << "3. ATM System\n";
        cout << "4. Exit\n";
        cout << "==========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser(users);
                break;
            case 2:
                displayUsers(users);
                break;
            case 3:
                atmSystem(users);
                break;
            case 4:
                cout << "\nExiting program. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
