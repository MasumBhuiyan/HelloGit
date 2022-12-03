#include <iostream>

using namespace std;

void log(string tag, string message) {
    cout << "[" << tag << "] << message << endl;   
}

int add(int a, int b) {
    return a + b;   
}

int subtract(int a, int b) {
    return a - b;   
}

int multiply(int a, int b) {
    return a * b;   
}

int divide(int a, int b) {
    if (b == ) {
        log(TAG, "Can not divide an integer with zero.");
        return 0;
    }
    return a / b; 
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    return 0;
}
