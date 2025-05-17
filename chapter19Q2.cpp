#include <iostream>
#include <string>
#include "DynStack.h"
using namespace std;

int main() {
    cout << "Testing DynStack<T> with multiple types...\n\n";

    // Integer stack
    DynStack<int> intStack;
    cout << "Pushing integers: 1, 2\n";
    intStack.push(1);
    intStack.push(2);
    int intVal;
    intStack.pop(intVal);
    cout << "Popped from int stack: " << intVal << endl;

    // String stack
    DynStack<string> strStack;
    cout << "\nPushing strings: 'Hello', 'World'\n";
    strStack.push("Hello");
    strStack.push("World");
    string strVal;
    strStack.pop(strVal);
    cout << "Popped from string stack: " << strVal << endl;

    // Double stack
    DynStack<double> doubleStack;
    cout << "\nPushing doubles: 3.14, 2.718\n";
    doubleStack.push(3.14);
    doubleStack.push(2.718);
    double doubleVal;
    doubleStack.pop(doubleVal);
    cout << "Popped from double stack: " << doubleVal << endl;

    // Char stack
    DynStack<char> charStack;
    cout << "\nPushing chars: 'X', 'Y'\n";
    charStack.push('X');
    charStack.push('Y');
    char charVal;
    charStack.pop(charVal);
    cout << "Popped from char stack: " << charVal << endl;

    cout << "\nAll tests completed!\n";
    return 0;
}
