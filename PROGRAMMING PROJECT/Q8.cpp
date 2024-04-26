#include <iostream>
using namespace std;

int main() {
    double totaldebt(1000),monthlypayment(50),monthlyinterestrate(0.015), totalinterestpaid(0);
    int months = 0;

    while (total_debt > 0) {
        double interest_payment = total_debt * monthly_interest_rate;
        total_interest_paid += interest_payment;
        total_debt -= (monthly_payment - interest_payment);
        months++;
    }

    cout << "It will take " << months << " months to pay off the loan." << endl;
    cout << "Total interest paid: $" << total_interest_paid << endl;

    return 0;
}