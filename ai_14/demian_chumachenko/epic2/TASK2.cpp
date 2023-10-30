#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   float m, n, res_1;
   bool res_2, res_3;

   cout << "input n: ";
   cin >> n;
   cout << "input m: ";
   cin >> m;

   res_1 = n++*m;
   res_2 = n++<m;
   res_3 = n++>m;

   cout<< boolalpha;  // флажок, щоб виводити true false

   cout << res_1 << endl;
   cout << res_2 << endl;
   cout << res_3 << endl;
} 