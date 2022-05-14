#include <iostream>
#include <math.h>
using namespace std;

int main () {
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
        cout << "Two roots" << endl;
        cout << "First root = " << (-b+sqrt(D))/(2*a) << endl;
        cout << "Second root = " << (-b-sqrt(D))/(2*a);
    }
    if (D == 0)
    {
        cout << "One root" << endl;
        cout << "Root = " << -(b/(2*a));
    }
    if (D < 0)
    {
        cout << "No roots";
    }
}
