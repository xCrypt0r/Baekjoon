#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    double price;

    cin >> T;
    cout << fixed;
    cout.precision(2);

    while (T--)
    {
        cin >> price;
        cout << "$" << price * 0.8 << "\n";
    }
}
