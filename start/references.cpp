#include <iostream>

using namespace std;

int main() {
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza

    string food_too = "Pizza";

    cout << &food; // Outputs 0x6dfed4
    return 0;
}