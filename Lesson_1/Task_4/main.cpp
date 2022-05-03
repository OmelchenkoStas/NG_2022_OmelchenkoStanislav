#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float MotherBoardPrice, VideocardPrice, CPUprice, Discount;
    cout << "Motherboard price: ";
    cin >> MotherBoardPrice;
    cout << "Videocard Price: ";
    cin >> VideocardPrice;
    cout << "CPU price: ";
    cin >> CPUprice;
    cout << "Discount: ";
    cin >> Discount;
    cout << "Price: " << ((MotherBoardPrice + VideocardPrice + CPUprice) - ((MotherBoardPrice + VideocardPrice + CPUprice) / 100) * Discount) << endl;

    return 0;
}
