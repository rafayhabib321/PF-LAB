#include <iostream>
#include <iomanip> // For formatting the output
using namespace std;

int main() {
    // Declare two integers
    int int1 = 10;
    int int2 = 5;
    
    // Declare two floating point numbers
    float float1 = 10.5f;
    float float2 = 3.2f;
    
    // arthmetic operation with integers
    int intAdd = int1 + int2;
    int intSub = int1 - int2;
    int intMul = int1 * int2;
    float intDiv = static_cast<float>(int1) / int2;  //static_cast to convert int value 
    
    // arthmetic operation with float
    float floatAdd = float1 + float2;
    float floatSub = float1 - float2;
    float floatMul = float1 * float2;
    float floatDiv = float1 / float2;

    cout << fixed << setprecision(2); // Set output to fixed-point with 2 decimal places

    // Integer operations
    cout << "Integer operations:" << endl;
    cout << "Addition: " << int1 << " + " << int2 << " = " << intAdd << endl;
    cout << "Subtraction: " << int1 << " - " << int2 << " = " << intSub << endl;
    cout << "Multiplication: " << int1 << " * " << int2 << " = " << intMul << endl;
    cout << "Division: " << int1 << " / " << int2 << " = " << intDiv << endl;

    // Floating-point operations
    cout << "\nFloating-point operations:" << endl;
    cout << "Addition: " << float1 << " + " << float2 << " = " << floatAdd << endl;
    cout << "Subtraction: " << float1 << " - " << float2 << " = " << floatSub << endl;
    cout << "Multiplication: " << float1 << " * " << float2 << " = " << floatMul << endl;
    cout << "Division: " << float1 << " / " << float2 << " = " << floatDiv << endl;

    return 0;
}
