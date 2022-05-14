#include <iostream>

using namespace std;

int main()
{
    int size, i, j;
    cout<<"Size: ";
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(i>=1 && i<=size-2 && j>=1 && j<=size-2)
                cout<<" ";
            else
                cout<<"*";
        }
        cout << endl;
    }
    return 0;
}
