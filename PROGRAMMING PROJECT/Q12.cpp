#include <iostream>
using namespace std;

int main() {
    double radiusinches, depthfeet, volumecubicfeet, gallons,radiusfeet,radiussquer;
    const float pi=3.14;

    cout << "Enter the radius of the well casing in inches: ";
    cin >> radiusinches;
    cout << "Enter the depth of the well in feet: ";
    cin >> depthfeet;

    radiusfeet = radiusinches / 12.0;
    radiussquer=radiusfeet*radiusfeet;
    volumecubicfeet = pi* radiussquer* depthfeet;
    gallons = volumecubicfeet * 7.48;
    cout << "The number of gallons stored in the well casing is: " << gallons << " gallons" << endl;
    return 0;
}