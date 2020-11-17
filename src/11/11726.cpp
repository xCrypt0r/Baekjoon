/**
 * 11726. 2×n 타일링
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

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