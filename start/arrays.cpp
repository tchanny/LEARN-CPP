#include <iostream>

using namespace std;

int main() {
    string cars1[4];
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for(int i = 0; i < 4; i++) {
        cout << cars[i] << "\n";
    }

    int myNum[3] = {10, 20, 30};

    cars[0] = "Opel";
    cout << cars[0];

    string cars_too[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3

    string carsik[5];
    carsik[0] = "Volvo";
    carsik[1] = "BMW";
    // ...
    return 0;
}