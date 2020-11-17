/**
 * 5928. Contest Timing
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 12일
 */

#include <iostream>

using namespace std;

int main()
{
    int D, H, M;

    cin >> D >> H >> M;

    int spent = (D - 11) * 1440 + (H - 11) * 60 + (M - 11);

    cout << (spent < 0 ? -1 : spent);
}
