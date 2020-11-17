/**
 * 13866. 팀 나누기
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
    const int size = 4;
    int level[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> level[i];
    }

    sort(level, level + size);

    cout << abs(level[0] + level[3] - level[1] - level[2]);
}
