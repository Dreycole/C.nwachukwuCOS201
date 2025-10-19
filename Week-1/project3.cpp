#include <iostream>
using namespace std;

int main() {
    double purchaseAmount;
    cout << "Enter the total purchase amount: $";
    cin >> purchaseAmount;
    
    double salesTax = purchaseAmount * 0.06;
    double totalWithTax = purchaseAmount + salesTax;
    
    cout << "Sales tax (6%) is: $" << salesTax << endl;
    cout << "Total with tax is: $" << totalWithTax << endl;

    return 0;
}