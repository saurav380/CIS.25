#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

using namespace std;

int main() {
    // Define the income and tax rates
    double income = 95000.0;
    double estateTaxRate = 0.04; // 4%
    double countyTaxRate = 0.02; // 2%

    // Calculate the estate tax, county tax, and total tax
    double estateTax = income * estateTaxRate;
    double countyTax = income * countyTaxRate;
    double totalTax = estateTax + countyTax;

    // Output the results with fixed decimal precision
    cout << fixed << setprecision(2); // Set decimal precision to 2 places

    cout << "Total Sales (Income): $" << income << endl;
    cout << "Estate Tax (4%): $" << estateTax << endl;
    cout << "County Tax (2%): $" << countyTax << endl;
    cout << "Total Tax to Pay: $" << totalTax << endl;

    return 0;
}
