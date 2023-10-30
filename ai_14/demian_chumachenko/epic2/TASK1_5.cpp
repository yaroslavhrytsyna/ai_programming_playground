#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    int a = 100;
    double b = 0.001;

    //допоміжні змінні для зберігання проміжних результатів

    int POW_A_2 = pow(a, 2);
    int POW_A_3 = pow(a, 3);
    int POW_A_4 = pow(a, 4);

    double POW_B_2 = pow(b, 2);
    double POW_B_3 = pow(b, 3);
    double POW_B_4 = pow(b, 4);

    double c = a - b;
    double d = POW_A_4 - 4 * POW_A_3 * b;
    double e = 6 * POW_A_2 * POW_B_2 - 4 * a * POW_B_3 + POW_B_4;

    double RESULT = (c - d) / e;

    cout << RESULT;
}