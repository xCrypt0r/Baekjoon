#include <iostream>

using namespace std;

int main()
{
    int M, D;

    cin >> M >> D;

    if (M < 2)
    {
        cout << "Before";
    }
    else if (M == 2)
    {
        cout << (D > 18 ? "After" : D < 18 ? "Before" : "Special");
    }
    else
    {
        cout << "After";
    }
}
