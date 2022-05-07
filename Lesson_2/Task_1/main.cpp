#include <iostream>

using namespace std;

int main()
{
    int num, sum;
    cout << "Enter your number: ";
    cin >> num;
    for(int i = num; i > 0; i/=10){
        if(i%2 == 0){
            sum +=i%10;
        }
    }
    cout << "Sum of even numbers: " << sum;
    return 0;
}
