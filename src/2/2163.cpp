/**
 * 2163. 초콜릿 자르기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 20일
 */

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