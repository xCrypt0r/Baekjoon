/**
 * 17496. 스타후르츠
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
    int N, T, C, P;

    cin >> N >> T >> C >> P;
    cout << (N % T ? N / T : N / T - 1) * C * P;
}
