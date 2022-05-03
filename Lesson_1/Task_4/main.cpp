#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float MotherBoardPrice, VideocardPrice, CPUprice, Discount, Price, sum, disc;
    cout << "Motherboard price: ";
    cin >> MotherBoardPrice;
    cout << "Videocard Price: ";
    cin >> VideocardPrice;
    cout << "CPU price: ";
    cin >> CPUprice;
    cout << "Discount: ";
    cin >> Discount;
    sum = MotherBoardPrice + VideocardPrice + CPUprice;
    cout << "Price: " << sum - ((sum / 100) * Discount) << endl;

    return 0;
}
