/**
 * 1065. 한수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 19일
 */

#include <iostream>

using namespace std;

int main()
{
    int N;
    int a, b, c, count = 0;

    cin >> N;

    if (N < 100)
    {
        count = N;
    }
    else
    {
        count = 99;

        for (int i = 100; i <= N; ++i)
        {
            a = i / 100;
            b = (i / 10) % 10;
            c = i % 10;

            if (a - b == b - c)
            {
                count++;
            }
        }
    }

    cout << count;
}
