#include <iostream>

using namespace std;

int main()
{
    long long edges[5];

    for (int i = 0; i < 5; i++)
    {   
        if(!(cin >> edges[i]))
        {
            cout << "Wrong input!\n";
            return 1;
        }
        if(edges[i] <= 0)
        {
            cout << "ERROR\n";
            return 0;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if(edges[i] < edges[i + 1])
        {
            cout << "LOSS\n";
            return 0; 
        }
    }
    
    cout << "WIN\n";

    return 0;
}
