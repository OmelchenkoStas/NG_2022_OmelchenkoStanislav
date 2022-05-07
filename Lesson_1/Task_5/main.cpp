#include <iostream>
#include <math.h>
using namespace std;

int main () {
    setlocale(0, "");
    float a, b, c, D;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    D=(b*b)-4*a*c;
    if (D > 0)
    {
        cout << "Рiвняння має 2 коренi" << endl;
        cout << "Перший корiнь = " << (-b+sqrt(D))/(2*a) << endl;
        cout << "Другий корінь = " << (-b-sqrt(D))/(2*a);
    }
    if (D == 0)
    {
        cout << "Рiвняння має 1 корiнь" << endl;
        cout << "Корiнь = " << -(b/(2*a));
    }
    if (D < 0)
    {
        cout << "Коренiв немає";
    }
}
