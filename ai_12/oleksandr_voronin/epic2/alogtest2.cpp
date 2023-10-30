#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n[5]={9,7,4,2,5};
    int fatigue;
    int i;
    int m;
// виводимо елементи масиву
    for (int i = 0; i < 5; i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;

    
    int min = n[0];
    int max = n[0];
    //Знаходимо мінімальний елемент масиву з 2 елементу
    for (int i = 1; i < 5; i++)
    {
        if (min > n[i])
        {
            min = n[i];
        }
        
    }
    cout <<"min "<< min << endl;
    //Знаходимо максимальне значення елемент масиву з 2 елементу
    for (int i = 1; i < 5;i++)
    {
        if (max < n[i])
        {
            max = n[i];
        }
    }
    cout <<"max "<< max << endl;
   //Знаходжу втому
   fatigue = max-min;
   cout << "fatigue " << fatigue << endl;
   //Видалити 1 елемент з масиву
  for (int i = 3; i < 5; i=i+1)
  {
    n[i]=n[i + 1];
  }
  //зсуваю маcив на 1 елемент,тобто n[3] міняю на n[4] 
  for (int i = 0; i < 4; i=i+1)
  {
    cout << "  "<<n[i];
  }
  cout << endl;
  //шукаєм max i min в меншому масиві

    int mmin = n[0];
    int mmax = n[0];

  for (int i=1;i<4;i++)
  {
    if (mmin > n[i])
    {
        mmin = n[i];
    }
  }
   cout << "mmin " << mmin <<endl;
   for (int i=1;i<4;i++)
   {
    if (mmax < n[i])
    {
        mmax = n[i];
    }
   }
    cout << "mmax " << mmax <<endl;
    m = mmax - mmin;
    cout << "m: "<< m << endl;
    
   
    return 0;
}