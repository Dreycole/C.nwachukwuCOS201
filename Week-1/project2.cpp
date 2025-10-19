#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << "After swapping:" << endl;
    cout << "First number is now: " << num1 << endl;
    cout << "Second number is now: " << num2 << endl;

    return 0;
}