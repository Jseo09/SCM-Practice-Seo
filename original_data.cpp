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

// New feature: Function to compute factorial
int factorial(int n) {
    if (n < 0) {
        cout << "Error: Factorial of a negative number is undefined." << endl;
        return -1;
    }
    if (n == 0)
        return 1;
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
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
    
    // Using the new feature: calculate factorial
    int num;
    cout << "Enter a number to compute its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    
    return 0;
}
