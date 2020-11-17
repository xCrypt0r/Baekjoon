/**
 * 2506. 점수계산
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 22일
 */

#include <iostream>

using namespace std;

int main()
{
    int N, score = 0, combo = 0;
    bool is_right;

    cin >> N;

    while (N--)
    {
        cin >> is_right;

        if (is_right)
        {
            score += ++combo;
        }
        else
        {
            combo = 0;
        }
    }

    cout << score;
}
