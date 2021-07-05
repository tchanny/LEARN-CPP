#include <iostream>

using namespace std;

// Create a function
void myFunction() {
  cout << "I just got executed!";
}

void myFunction1(string fname) {
  cout << fname << " Refsnes\n";
}

void myFunction2(string country = "Norway") {
  cout << country << "\n";
}

void myFunction3(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int sum(int x, int y) {
    return x + y;
}

void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int plusFuncInt(int x, int y) {
    return x + y;
}

double plusFuncDouble(double x, double y) {
    return x + y;
}

int main() {
    myFunction(); // call the function
    myFunction1("Liam");
    myFunction1("Jenny");
    myFunction1("Anja");
    myFunction2("Sweden");
    myFunction2("India");
    myFunction2();
    myFunction2("USA");
    myFunction3("Liam", 3);
    myFunction3("Jenny", 14);
    myFunction3("Anja", 30);
    int z = sum(5, 3);
    cout << z;
    return 0;


    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    int myNum1 = plusFuncInt(8, 5);
    double myNum2 = plusFuncDouble(4.3, 6.26);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;
    return 0;
}

