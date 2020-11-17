/**
 * 1003. 피보나치 함수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int dp[41] = { 0, 1 };
int fibonacci(int n);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;

    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        cin >> N;

        if (N == 0)
        {
            cout << "1 0\n";
        }
        else if (N == 1)
        {
            cout << "0 1\n";
        }
        else
        {
            fibonacci(N);
            cout << dp[N - 1] << ' ' << dp[N] << '\n';
        }
    }
}

int fibonacci(int n)
{
    if (n <= 1 || dp[n] != 0)
    {
        return dp[n];
    }

    return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}