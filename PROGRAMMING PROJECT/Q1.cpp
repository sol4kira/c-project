#include <iostream>
using namespace std;

int main() {
    const double lethaldosemouse = 5, massmouse = 35,sweetenerpercent = 0.001,masscansoda = 350;
    double weightdieter,massstopdieting,lethaldosehuman,lethaldosesweetener ,maxsodapop;
    int cans;
    char repeat;
    do {
        cout << "Enter the weight at which the dieter will stop dieting (in grams): ";
        cin >> massstopdieting;

        lethaldosehuman = (lethaldosemouse / massmouse) * massstopdieting;
        lethaldosesweetener = lethaldosehuman / sweetenerpercent;

        max_soda_pop = lethaldosesweetener * masscansoda;
        cans = maxsodapop / masscansoda;

        cout << "The dieter can drink approximately " << cans << " cans of diet soda pop without reaching the lethal dose." << endl;

        cout << "Do you want to calculate again? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}