/**
 * 1547. 공
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 28일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int M, X, Y;
    bool exists = false;
    int P[4] = { 0, 1, 0, 0 };

    cin >> M;

    while (M--)
    {
        cin >> X >> Y;

        swap(P[X], P[Y]);
    }

    for (int i = 1; i <= 3; ++i)
    {
        if (P[i] == 1)
        {
            exists = true;

            cout << i;

            break;
        }
    }

    if (!exists)
    {
        cout << -1;
    }
}
