/**
 * 5617. 問題 1
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,020 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 9월 19일
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int result[4] = { 0 };

    while (true)
    {
        vector<int> sides(3);

        for (int i = 0; i < 3; i++)
        {
            cin >> sides[i];
        }

        sort(sides.begin(), sides.end());

        if (sides[0] + sides[1] <= sides[2])
        {
            break;
        }

        result[0]++;

        if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2])
        {
            result[1]++;

            continue;
        }

        if (sides[0] * sides[0] + sides[1] * sides[1] > sides[2] * sides[2])
        {
            result[2]++;

            continue;
        }

        if (sides[0] * sides[0] + sides[1] * sides[1] < sides[2] * sides[2])
        {
            result[3]++;

            continue;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << result[i] << " ";
    }
}