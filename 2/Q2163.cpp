#include <iostream>
#include <algorithm>

using namespace std;

int dp[301];
int N, M;
int solve(int n);

int main()
{
    cin >> N >> M;

    dp[0] = N - 1;

    cout << solve(M - 1);
}

int solve(int n)
{
    if (dp[n] != 0 || n <= 0)
    {
        return dp[n];
    }

    return dp[n] = solve(n - 1) + N;
}