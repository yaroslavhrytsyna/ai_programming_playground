#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    double sum;
    int years;
    double percent;

    string name;
    cout << "Your name: ";
    cin >> name;
    cout << "Enter deposit amount: ";
    cin >> sum;
    cout << "Enter amount of years: ";
    cin >> years;
    cout << "Enter percent percent: ";
    cin >> percent;

    double result = sum *pow((1 + percent * 0.01), years);

    printf("Thank you %s \nYou will receive: %lf", (name.c_str()), result);
    return 0;
}
