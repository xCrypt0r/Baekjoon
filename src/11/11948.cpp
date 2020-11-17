/**
 * 11948. 과목선택
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 12일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int score[6];

    for (int i = 0; i < 6; ++i)
    {
        cin >> score[i];
    }

    sort(score, score + 4, greater<int>());
    sort(score + 4, score + 6, greater<int>());

    cout << score[0] + score[1] + score[2] + score[4];
}
