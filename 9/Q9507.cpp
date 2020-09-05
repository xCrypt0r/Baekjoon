#include <iostream>

using namespace std;

long long koong[69] = { 1, 1, 2, 4 };

long long solve(int n);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n;

    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        cout << solve(n) << "\n";
    }
}

long long solve(int n)
{
    if (koong[n] > 0)
    {
        return koong[n];
    }

    return koong[n] = solve(n - 1) + solve(n - 2) + solve(n - 3) + solve(n - 4);
}
