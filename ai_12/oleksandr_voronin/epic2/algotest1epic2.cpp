#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int h1, h2, h3, h4;
    int d1, d2, d3, d4;
    int a1, a2, a3, a4;
    // Ввід довжин ніжок
    cout << "Type size of chair leg 1: ";
    cin >> h1;
    cout << "Type size of chair leg 2: ";
    cin >> h2;
    cout << "Type size of chair leg 3: ";
    cin >> h3;
    cout << "Type size of chair leg 4: ";
    cin >> h4;

    // Ввід довжин, які відпиляють від ніжок
    cout << "how much do you want to short leg 1: ";
    cin >> d1;
    cout << "how much do you want to short leg 2: ";
    cin >> d2;
    cout << "how much do you want to short leg 3: ";
    cin >> d3;
    cout << "how much do you want to short leg 4: ";
    cin >> d4;

    // Обчислення h i d
    a1= h1-d1;
    a2= h2-d2;
    a3= h3-d3;
    a4= h4-d4;

    cout << a1 << endl;
    cout << a2 << endl;
    cout << a3 << endl;
    cout << a4 << endl;
    
    /*Шукаємо мінімальне значення h,для цього спочатку шукаєм мінімальне значення від h1 i h2,після цього шукаєм
     мінімальне значення від (h1 i h2) та h3,і таким самим шляхом шукаєм мінімальне значення від (h1,h2,h3) та h4
     Так само шукаєм і максимальне значення*/
    int minLeg = min(min(min(h1, h2), h3), h4);
    int maxLeg = max(max(max(h1, h2), h3), h4);

    // Перевірка на ERROR
    if (d1 > h1 || d2 > h2 || d3 > h3 || d4 > h4) {
        cout << "ERROR" << endl;
    }
    // Перевірка чи стіл не перевернуться
    else if (maxLeg >= 2 * minLeg) 
    {
        cout << "NO" << endl;
    }
    // Перевірка чи ніжки рівні чи ні
    else if(a1 == a2 && a2 == a3 && a3 == a4)
    {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}