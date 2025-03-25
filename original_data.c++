#include <iostream>
using namespace std;

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Updated division function with bug fix: division by zero check
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero." << endl;
        return 0; // Alternatively, you can throw an exception.
    }
    return a / b;
}


int main() {
    cout << "Simple Calculator" << endl;
    
    double a, b;
    char op;
    cout << "Enter expression (a operator b): ";
    cin >> a >> op >> b;
    
    double result = 0;
    switch(op) {
        case '+': result = add(a, b); break;
        case '-': result = subtract(a, b); break;
        case '*': result = multiply(a, b); break;
        case '/': result = divide(a, b); break;
        default: 
            cout << "Unknown operator" << endl; 
            return 1;
    }
    
    cout << "Result: " << result << endl;
    return 0;
}
