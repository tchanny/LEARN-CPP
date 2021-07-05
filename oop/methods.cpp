#include <iostream>

using namespace std;

class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

class Car {
    public:
        int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}

int main() {
    MyClass myObj;     // Create an object of MyClass
    myObj.myMethod();  // Call the method 

    Car myObj1; // Create an object of Car
    cout << myObj1.speed(200); // Call the method with an argument
    return 0;
}