/**
 * 10103. 주사위 게임
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 23일
 */

#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    int score = 100, score2 = 100;

    cin >> n;

    while (n--)
    {
        cin >> x >> y;

        if (x > y)
        {
            score2 -= x;
        }
        else if (x < y)
        {
            score -= y;
        }
    }

    cout << score << "\n" << score2;
}
