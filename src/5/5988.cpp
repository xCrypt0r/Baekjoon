#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    string K;

    cin >> N;

    while (N--)
    {
        cin >> K;
        cout << (K[K.size() - 1] & 1 ? "odd" : "even") << "\n";
    }
}
