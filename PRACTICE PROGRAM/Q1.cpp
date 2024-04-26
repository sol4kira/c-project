#include <iostream>
using namespace std;

int main() {
    const double ouncespermetricton = 35273.92;
    double weightinounces;
    int boxesneededforonemetricton,weightinmetrictons;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y') {
        cout << "Enter the weight of the package of breakfast cereal in ounces: ";
        cin >> weightinounces;

        weightinmetrictons = weightinounces / ouncespermetricton;
        boxesneededforonemetricton = ouncespermetricton / weightinounces;

        cout << "Weight in metric tons: " << weightinmetrictons << endl;
        cout << "Number of boxes needed to yield 1 metric ton of cereal: " << boxesneededforonemetricton << endl;

        cout << "Do you want to calculate again? (y/n): ";
        cin >> repeat;
    }

    return 0;
}
