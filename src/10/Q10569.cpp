#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, V, E;

    cin >> T;

    while (T--)
    {
        cin >> V >> E;
        cout << E - V + 2 << '\n';
    }
}
