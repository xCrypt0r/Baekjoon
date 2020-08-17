#include <iostream>

using namespace std;

int dp[1000] = { 0, 1, 2, 4 };
int solve(int num);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, num;

    cin >> N;

    for (; N > 0; --N)
    {
        cin  >> num;
        cout << solve(num) << '\n';
    }
}

int solve(int num)
{
    if (dp[num] != 0)
    {
        return dp[num];
    }

    return dp[num] = solve(num - 3) + solve(num - 2) + solve(num - 1);
}
