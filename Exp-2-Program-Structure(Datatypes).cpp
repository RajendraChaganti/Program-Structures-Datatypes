// NAME : Rajendra Chaganti
// PRN : 24070123150
// Program: Input and Size of Different Data Types
#include <iostream>
#include <string> // Include the string library to use string data type
using namespace std;
int main() {
    // For Variable declarations
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;
    bool boolVar;
    long longVar;
    short shortVar;
    string strVar;
    // Taking input for each data type
    cout << "Enter an integer: ";
    cin >> intVar;
    cout << "Enter a float: ";
    cin >> floatVar;
    cout << "Enter a double: ";
    cin >> doubleVar;
    cout << "Enter a character: ";
    cin >> charVar;
    cout << "Enter a boolean (0 or 1): ";
    cin >> boolVar;
    cout << "Enter a long integer: ";
    cin >> longVar;
    cout << "Enter a short integer: ";
    cin >> shortVar;
    cout << "Enter a string (single word only): ";
    cin >> strVar; // 
    // Displaying size of each data type
    cout << "\nSizes of different data types (in bytes):\n";
    cout << "int: " << sizeof(intVar) << " bytes" << endl;
    cout << "float: " << sizeof(floatVar) << " bytes" << endl;
    cout << "double: " << sizeof(doubleVar) << " bytes" << endl;
    cout << "char: " << sizeof(charVar) << " bytes" << endl;
    cout << "bool: " << sizeof(boolVar) << " bytes" << endl;
    cout << "long: " << sizeof(longVar) << " bytes" << endl;
    cout << "short: " << sizeof(shortVar) << " bytes" << endl;
    cout << "string: " << sizeof(strVar) << " bytes" << endl;
    cout << "Actual string length: " << strVar.length() << " characters" << endl;
    return 0;
}
/*
Output
Enter an integer: 45
Enter a float: 34
Enter a double: 32
Enter a character: r
Enter a boolean (0 or 1): 0
Enter a long integer: 3
Enter a short integer: 4
Enter a string (single word only): raja

Sizes of different data types (in bytes):
int: 4 bytes
float: 4 bytes
double: 8 bytes
char: 1 bytes
bool: 1 bytes
long: 8 bytes
short: 2 bytes
string: 32 bytes
Actual string length: 4 characters
*/
