#include <iostream>

using namespace std;

double computeTax(int, double);

int main()
{
    //prompt the user to enter filling statess
    cout <<"0- single filer, 1-married jointly,\n2- married separately, 3- head of household \nenter the filling status:";
    int status;
    cin >> status;
    cout <<"enter the taxable incom: ";
    int income;
    cin >> income;

    cout << "tax is "<< computeTax(status, income);
    return 0;
}

double computeTax(int status, double income)
{
    const int BRACKET_SIZE = 6;
    double rate[] = {0.10, 0.15, 0.27, 0.30, 0.35, 0.386};
    double brackets[4][5] =
    {
        {6000, 12000, 67700, 141250, 307050},
        {12000, 46700, 112850, 171950, 307050},
        {6000, 23350, 56425, 85975, 153525},
        {10000, 37450, 96700, 156600, 307050},
    };

    double tax = 0;
    if (income <= brackets[status][0])
    {
        return tax = income * rate[0];
    }
    else
    {
        tax = brackets[status][0] * rate[0];
        cout << tax <<"\n";
    }

    for (int i = 1; i < BRACKET_SIZE; i++)
    {
        if (income > brackets[status][i])
        {
            tax += (brackets[status][i] - brackets[status][i - 1]) * rate[i];
        }
        else
        {
            int a = income - brackets[status][i - 1];
            tax += a * rate[i];
            cout << tax << "   " << income <<"   " << brackets[status][i-1] <<"   " << a;
            return tax;
        }

    }


}

