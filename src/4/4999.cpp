#include <iostream>

using namespace std;

int main()
{
    string ah, required_ah;
    int ah_count = 0, required_ah_count = 0;

    cin >> ah >> required_ah;

    if (ah.length() >= required_ah.length())
    {
        cout << "go";
    }
    else
    {
        cout << "no";
    }
}