
    #include <iostream>
using namespace std;

int main() {
    double merchCost, employeesSalary, annualRent, electricity, ProfitValue;

    cout << "Enter the total cost of merchandise: ";
    cin >> merchCost;

    cout << "Enter the total salary of employees: ";
    cin >> employeesSalary;

    cout << "Enter the yearly rent: ";
    cin >> annualRent;

    cout << "Enter the estimated electricity cost: ";
    cin >> electricity;

    cout << "Enter the desired net profit percentage: ";
    cin >> ProfitValue;

    double totalExpenses = merchCost + employeesSalary + annualRent + electricity;
    double desiredProfit = (ProfitValue / 100) * merchCost;
    double totalRevenueNeeded = totalExpenses + desiredProfit;


    double saleDiscount = 0.15;
    totalRevenueNeeded /= (1 - saleDiscount);


    double markupPercentage = (totalRevenueNeeded / merchCost - 1) * 100;


    cout << "To achieve a net profit of approximately " << ProfitValue << "% ";
    cout << "the merchandise should be marked up by approximately " << markupPercentage << "%" << endl;

    return 0;
}

