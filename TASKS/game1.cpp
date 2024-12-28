#include <iostream>
#include <string>
using namespace std;

void intro() {
    cout << "Welcome to the Text Adventure Game!\n";
    cout << "You find yourself in a dark room with two doors.\n";
    cout << "Do you choose to go through the 'left' door or the 'right' door?\n";
}

void leftRoom() {
    cout << "You enter the left room and find a sleeping dragon.\n";
    cout << "Do you 'sneak' past it or 'fight' the dragon?\n";
    string choice;
    cin >> choice;

    if (choice == "sneak") {
        cout << "You successfully sneak past the dragon and find a treasure chest! You win!\n";
    } else if (choice == "fight") {
        cout << "The dragon wakes up and breathes fire! You lose!\n";
    } else {
        cout << "Invalid choice. The dragon wakes up and you are forced to flee.\n";
    }
}

void rightRoom() {
    cout << "You enter the right room and find a mysterious wizard.\n";
    cout << "The wizard offers you two potions: a 'red' potion and a 'blue' potion.\n";
    cout << "Which one do you choose?\n";
    string choice;
    cin >> choice;

    if (choice == "red") {
        cout << "You gain incredible strength and escape the dungeon! You win!\n";
    } else if (choice == "blue") {
        cout << "You fall into a deep sleep and wake up outside the dungeon. You survive, but the adventure is over.\n";
    } else {
        cout << "The wizard gets annoyed and teleports you out of the dungeon. Game over!\n";
    }
}

int main() {
    intro();

    string choice;
    cin >> choice;

    if (choice == "left") {
        leftRoom();
    } else if (choice == "right") {
        rightRoom();
    } else {
        cout << "Invalid choice. You remain stuck in the dark room forever. Game over!\n";
    }

    return 0;
}
