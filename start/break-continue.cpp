#include <iostream>

using namespace std;

int main() {
    // break
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << endl;
    } 

    // continue
    for (int j = 0; j < 10; j++) {
        if (j == 4) {
            continue;
        }
        cout << j << endl;
    } 
    return 0;
}