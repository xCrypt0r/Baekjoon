/**
 * 2530. 인공지능 시계
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,016 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 12일
 */

#include <iostream>

using namespace std;

int main()
{
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    C += D;
    B += C / 60;
    A += B / 60;

    cout << (A % 24) << " " << (B % 60) << " " << (C % 60);
}
