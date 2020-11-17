/**
 * 5596. 시험 점수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 22일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int score, sum = 0, sum2 = 0;

    for (int i = 0; i < 4; ++i)
    {
        cin >> score;

        sum += score;
    }

    for (int i = 0; i < 4; ++i)
    {
        cin >> score;

        sum2 += score;
    }

    cout << max(sum, sum2);
}
