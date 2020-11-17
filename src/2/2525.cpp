/**
 * 2525. 오븐 시계
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
    int A, B, C;

    cin >> A >> B >> C;

    A += C / 60;
    B += C % 60;

    if (B >= 60)
    {
        A++;
        B %= 60;
    }

    if (A >= 24)
    {
        A %= 24;
    }

    cout << A << " " << B;
}
