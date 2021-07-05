#include <iostream>

using namespace std;

int main() {
    int x = 100 + 50;
    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)

    /*
    documentation:

    Operator            	    Name    	            Description                  Example	
    +              Addition             Adds together two values                     x + y
    -              Subtraction          Subtracts one value from another             x - y
    *              Multilpication       Multiplies two values                        x * y
    /              Division             Divides one value by another                 x / y
    %              Modules              Returns the division remainder               x % y
    ++             Increment            Increases the value of a variable by 1       ++x
    --             Decrement            Decreases the value of a variable by 1       --x
    */
    return 0;
}