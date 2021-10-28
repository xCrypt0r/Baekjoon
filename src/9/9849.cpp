/**
 * 9849. Rect
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,020 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 10월 28일
 */

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    iostream::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    int x1 = INT_MIN;
    int x2 = INT_MAX;
    int y1 = INT_MIN;
    int y2 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int p[4];

        cin >> p[0] >> p[1] >> p[2] >> p[3];

        x1 = max(x1, p[0]);
        x2 = min(x2, p[1]);
        y1 = max(y1, p[2]);
        y2 = min(y2, p[3]);
    }

    cout << max(x2 - x1, 0) * max(y2 - y1, 0) << endl;
}