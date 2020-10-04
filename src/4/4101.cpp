#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    while (true)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
        {
            break;
        }

        cout << (a > b ? "Yes" : "No") << "\n";
    }
}
