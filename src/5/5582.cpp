/**
 * 5582. 공통 부분 문자열
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 64,556 KB
 * 소요 시간: 60 ms
 * 해결 날짜: 2021년 11월 13일
 */

#include <iostream>

using namespace std;

int dp[4001][4001];

int main()
{
    string a, b;
    int res = 0;

    cin >> a >> b;

    for (int i = 1; i <= a.size(); i++)
    {
        for (int j = 1; j <= b.size(); j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                res = max(res, dp[i][j]);
            }
        }
    }

    cout << res << endl;
}