#include <iostream>
using namespace std;
int main() {
    double amountNeeded, interestRate, duration,monthlyPayment ,faceValue,totalInterest  ;
    char repeat;

    do {
        cout << "Enter the amount the consumer needs to receive: $";
        cin >> amountNeeded;

        cout << "Enter the interest rate (as a percentage): ";
        cin >> interestRate;

        cout << "Enter the duration of the loan in months: ";
        cin >> duration;


        totalInterest = amountNeeded * (interestRate / 100) * (duration / 12);
        faceValue = amountNeeded + totalInterest;
        monthlyPayment = faceValue / duration;

        cout << "The face value required for the consumer to receive $" << amountNeeded << " is: $" << faceValue <<endl;
        cout << "The monthly payment will be: $" << monthlyPayment <<endl;

        cout << "\nDo you want to calculate another loan? (Y/N): ";
        cin >> repeat;
    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}
