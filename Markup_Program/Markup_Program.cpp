#include <iostream>
#include <cctype>
#include <string>
using namespace std;

double calculateRetail(double whole, double mark);

int main()
{
    double wholesale = 0.0;
    double markup = 0.0;
    double retail = 0.0;
    string input;

    do
    {
        cout << "Enter the wholesale cost: ";
        cin >> input;

        if (!isdigit(input[0]))
        {
            cout << "\nPlease enter numbers and not a characters.\n\n";
        }

        else
        {
            wholesale = stod(input);
        }

        if (wholesale < 0.0)
        {
            cout << "\nPlease enter a positive number.\n\n";
        }

    } while (wholesale < 0.0 || !isdigit(input[0]));
   



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
