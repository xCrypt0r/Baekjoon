/**
 * 1094. 막대기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 29일
 */

#include <iostream>

using namespace std;

int main()
{
    int X, count = 0;

    cin >> X;

    for (; X != 0; X >>= 1)
    {
        if (X & 1)
        {
            count++;
        }
    }

    cout << count;
}
