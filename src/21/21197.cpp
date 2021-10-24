/**
 * 21197. Stopwatch
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,020 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 10월 24일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;

    if (N % 2 == 1)
    {
        cout << "still running" << endl;

        return 0;
    }

    int t[N];
    int res = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> t[i];

        if (i % 2 == 1)
        {
            res += t[i] - t[i - 1];
        }
    }

    cout << res << endl;
}