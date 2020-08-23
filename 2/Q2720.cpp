#include <iostream>

using namespace std;

int main()
{
    int T, C;

    cin >> T;

    while (T--)
    {
        cin >> C;
        
        cout << C / 25 << " ";
        C %= 25;

        cout << C / 10 << " ";
        C %= 10;
        
        cout << C / 5 << " ";
        C %= 5;

        cout << C << "\n";
    }
}
