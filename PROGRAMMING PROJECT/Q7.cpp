#include <iostream>

int main() {
    double cost, inflationRate, years;
    int i;
    
    cout << "Enter the current cost of the item: ";
    cin >> cost;

    cout << "Enter the number of years from now that the item will be purchased: ";
    cin >> years;

    cout << "Enter the rate of inflation (as a percentage): ";
    cin >> inflationRate;

    inflationRate /= 100;

    for (i = 0; i < years; ++i) {
        cost += cost * inflationRate;
    }

    cout << "The estimated cost of the item after " << years << " years is: " << cost <<endl;

    return 0;
}
