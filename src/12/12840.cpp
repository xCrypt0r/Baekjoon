/**
 * 12840. 창용이의 시계
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,020 KB
 * 소요 시간: 20 ms
 * 해결 날짜: 2021년 10월 29일
 */

#include <iostream>

#define DAY 86400

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int h, m, s, q, T, c;

    cin >> h >> m >> s >> q;

    int now = h * 3600 + m * 60 + s;

    for (int i = 0; i < q; i++)
    {
        cin >> T;

        if (T == 1)
        {
            cin >> c;

            now = (now + c) % DAY;
        }
        else if (T == 2)
        {
            cin >> c;

            now = (now - c) % DAY;

            while (now < 0)
            {
                now += DAY;
            }
        }
        else
        {
            cout << now / 3600 << ' ' << (now / 60) % 60 << ' ' << now % 60 << '\n';
        }
    }
}