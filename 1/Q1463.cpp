#include <iostream>
#include <algorithm>

using namespace std;

int dp[1000001];
int get_count(int num);

int main()
{
    dp[1] = 0;

    int N, count = 0;

    cin >> N;
    cout << get_count(N);
}

int get_count(int num)
{
    for (int i = 2; i <= num; ++i)
    {
        dp[i] = dp[i - 1] + 1;

        if (i % 2 == 0)
        {
            dp[i] = min(dp[i / 2] + 1, dp[i]);
        }

        if (i % 3 == 0)
        {
            dp[i] = min(dp[i / 3] + 1, dp[i]);
        }
    }

    return dp[num];
}