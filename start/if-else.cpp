#include <iostream>

using namespace std;

int main() {
    if (20 > 18) {
        cout << "20 is greater than 18";
    }

    int x = 20;
    int y = 18;
    if (x > y) {
        cout << "x is greater than y";
    }

    int time = 20;
    if (time < 18) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }
    // Outputs "Good evening."

    /*

    if (condition1) {
        // block of code to be executed if condition1 is true
    } else if (condition2) {
        // block of code to be executed if the condition1 is false and condition2 is true
    } else {
        // block of code to be executed if the condition1 is false and condition2 is false
    }
    */

    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;
    return 0;
}