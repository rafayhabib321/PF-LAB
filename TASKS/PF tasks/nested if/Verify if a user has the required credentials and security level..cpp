#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    int securityLevel;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    cout << "Enter security level: ";
    cin >> securityLevel;

    if (username == "Ace") {
   
        if (password == "123") {
           
            if (securityLevel >= 5) {
                cout << "Access granted. Welcome, " << username << "!" << endl;
            } else {
                cout << "Access denied. Your security level is too low.";
            }
        } else {
            cout << "Access denied. Incorrect password.";
        }
    } else {
        cout << "Access denied. Incorrect username.";
    }

    return 0;
}
