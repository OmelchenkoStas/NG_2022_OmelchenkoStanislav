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
        cout << "�i������ �� 2 �����i" << endl;
        cout << "������ ���i�� = " << (-b+sqrt(D))/(2*a) << endl;
        cout << "������ ����� = " << (-b-sqrt(D))/(2*a);
    }
    if (D == 0)
    {
        cout << "�i������ �� 1 ���i��" << endl;
        cout << "���i�� = " << -(b/(2*a));
    }
    if (D < 0)
    {
        cout << "�����i� ����";
    }
}
