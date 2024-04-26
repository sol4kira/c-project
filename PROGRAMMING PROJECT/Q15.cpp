#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double aaluminum = 2.31e-5;
    double acopper = 1.70e-5;
    double aglass = 8.50e-6;
    double asteel = 1.20e-5;
    double a, lchange, tchange;
    
    cout << "Enter the coefficient of linear expansion (a): ";
    cin >> a;
    cout << "Enter the displacement (lchange) in meters: ";
    cin >> lchange;
    cout << "Enter the change in temperature (tchange) in Celsius: ";
    cin >> tchange;

    double l_o = lchange / (a * tchange);
    if (l_o > 0) {
        cout << "The material will expand by " <<l_o << " meters." << endl;
    } else {
        cout << "The material will contract by " <<-l_o<< " meters." << endl;
    }

    return 0;
}