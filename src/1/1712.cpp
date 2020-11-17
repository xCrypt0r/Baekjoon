/**
 * 1712. 손익분기점
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 2일
 */

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;
    cout << (B < C ? (A / (C - B)) + 1 : -1);
}
