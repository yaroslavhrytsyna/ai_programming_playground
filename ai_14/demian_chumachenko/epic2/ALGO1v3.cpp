#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long a[5];

    cout << "input cube sides value 1-5: ";
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];

    for(int i = 0; i < sizeof(a) / sizeof(int); i++){
        if(i < sizeof(a) / sizeof(int) -1 && a[i] < a[i+1]){
            cout << "LOSS" << endl;
            break;
        }
        else if(a[i] <= 0){
            cout << "ERROR" <<endl;
            break;
        }
        else if(i == 4){
            cout << "WIN" <<endl;
            break;
        }
    }
} 