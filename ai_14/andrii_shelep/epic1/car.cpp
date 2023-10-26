#include <iostream>

using namespace std;

int main()
{
    int salary , price;
    int n = 0;
    cout << "Enter the price of the car" << endl;
    cin >> price;
    cout << "Enter the salary" << endl;
    cin >> salary;
    for (int i=0; i<price; n++){
        i = i + salary;
    }
    cout << "You can buy the car in " << n << " months";
}