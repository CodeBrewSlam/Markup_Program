#include <iostream>
#include <string>
using namespace std;

double calculateRetail(double whole, double mark);

int main()
{
    double wholesale = 0.0;
    double markup = 0.0;
    double retail = 0.0;

    cout << "Enter the wholesale cost: ";
    cin >> wholesale;

    cout << "\nEnter the markup percentage: ";
    cin >> markup;

    cout << endl;

    retail = calculateRetail(wholesale, markup);

    cout << retail;

    return 0;
}

double calculateRetail(double whole, double mark)
{
    double retail = 0.0;

    retail = whole + ((whole * mark) / 100);

    return retail;
}
