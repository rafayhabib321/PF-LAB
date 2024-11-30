#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Achievement: Excellent" << endl;
    }
    else if (score >= 80) {
        cout << "Achievement: Good" << endl;
    }
    else if (score >= 70) {
        cout << "Achievement: Average" << endl;
    }
    else if (score >= 60) {
        cout << "Achievement: Below Average" << endl;
    }
    else {
        cout << "Achievement: Poor" << endl;
    }

    return 0;
}
