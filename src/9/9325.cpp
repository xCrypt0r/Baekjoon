/**
 * 9325. 얼마?
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, s, n, q, p;
    int cost;

    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        cin >> s >> n;

        cost = 0;
        cost += s;

        for (int j = 0; j < n; ++j)
        {
            cin >> q >> p;

            cost += q * p;
        }

        cout << cost << '\n';
    }
}