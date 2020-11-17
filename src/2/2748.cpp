/**
 * 2748. 피보나치 수 2
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 19일
 */

#include <iostream>

using namespace std;

long long dp[91] = { 0, 1 };
long long fibonacci(int n);

int main()
{
    int n;

    cin >> n;
    cout << fibonacci(n);
}

long long fibonacci(int n)
{
    if (n <= 1 || dp[n] != 0)
    {
        return dp[n];
    }

    return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}