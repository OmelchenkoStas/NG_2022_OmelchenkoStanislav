#include <iostream>
#include <math.h>
using namespace std;

int main () {
    setlocale(0, "");
    float a, b, c, D, x1, x2, root;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    D=(b*b)-4*a*c;
    if (D > 0)
    {
        x1 = (-b+sqrt(D))/(2*a);
        x2 = (-b-sqrt(D))/(2*a);
        cout << "Рiвняння має 2 коренi" << endl;
        cout << "Перший корiнь = " << x1 << endl;
        cout << "Другий корінь = " << x2;
    }
    if (D == 0)
    {
        root = -(b/(2*a));
        cout << "Рiвняння має 1 корiнь" << endl;
        cout << "Корiнь = " << root;
    }
    if (D < 0)
    {
        cout << "Коренiв немає";
    }
}
