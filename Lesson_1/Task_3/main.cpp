#include <iostream>

using namespace std;

int main()
{
    int age, t;
    cout <<"Enter your age: ";
    cin >> age;
    if (age >= 10){
       cout << "Do you study?(1\\0): ";
       cin >> t;
       if (t == 1){
        cout <<"You are awesome!";
       }
       if (t == 0)
        cout <<"Why?";
    }
     else if (age < 10)
        cout << "Wow, you're such an adult!";
    return 0;
}
