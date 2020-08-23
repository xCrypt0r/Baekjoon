#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M;

    cin >> T;

    while (T--)
    {
        cin >> N >> M;
        cout << M * 2 - N << " " << N - M << "\n";
    }
}
