/**
 * 10156. 과자
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
    int K, M, N;

    cin >> K >> M >> N;

    int need = K * M - N;

    cout << (need < 0 ? 0 : need);
}
