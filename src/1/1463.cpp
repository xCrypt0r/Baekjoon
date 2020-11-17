/**
 * 1463. 1로 만들기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 5,892 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 8월 17일
 */

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