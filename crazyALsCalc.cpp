#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sales, advance, commissionRate, commission, remainingPay;

    // Ask for input
    cout << "Enter the salesperson's monthly sales: ";
    cin >> sales;
    cout << "Enter the amount of advanced pay for this salesperson: ";
    cin >> advance;

    // Determine commission rate
    if (sales < 10000)
        commissionRate = 0.05;
    else if (sales <= 14999)
        commissionRate = 0.10;
    else if (sales <= 17999)
        commissionRate = 0.12;
    else if (sales <= 21999)
        commissionRate = 0.14;
    else
        commissionRate = 0.16;

    // Calculate commission
    commission = sales * commissionRate;

    // Calculate remaining pay after subtracting advance
    remainingPay = commission - advance;

    // Display results
    cout << fixed << setprecision(2); // format to 2 decimal places
    cout << "\nPay Results\n-----------\n";
    cout << "Sales: $" << sales << endl;
    cout << "Commission Rate: " << commissionRate << endl;
    cout << "Commission: $" << commission << endl;
    cout << "Advanced Pay: $" << advance << endl;

    if (remainingPay >= 0) {
        cout << "Remaining Pay: $" << remainingPay << endl;
    } else {
        cout << "Amount Owed to Crazy Al's: $" << -remainingPay << endl;
    }

    return 0;
}
