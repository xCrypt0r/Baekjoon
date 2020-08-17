#include <iostream>

using namespace std;

int dp[1001] = { 1, 1 };
int solve(int n);

int main()
{
    int n;

    cin >> n;
    cout << solve(n) % 10007;
}

int solve(int n)
{
    if (n <= 1 || dp[n] != 0)
    {
        return dp[n];
    }

    return dp[n] = (solve(n - 1) + solve(n - 2)) % 10007;
}