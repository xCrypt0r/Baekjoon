/**
 * 9095. 1, 2, 3 더하기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

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
