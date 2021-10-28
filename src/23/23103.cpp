/**
 * 23103. Academic Distance
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,020 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 10월 28일
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;

    int num[N][2];

    for (int i = 0; i < N; i++)
    {
        cin >> num[i][0] >> num[i][1];
    }

    int res = 0;

    for (int i = 1; i < N; i++)
    {
        res += abs(num[i][0] - num[i - 1][0]) + abs(num[i][1] - num[i - 1][1]);
    }

    cout << res << endl;
}