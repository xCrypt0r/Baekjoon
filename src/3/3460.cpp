/**
 * 3460. 이진수
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
    int T, N;

    cin >> T;

    while (T--)
    {
        cin >> N;

        for (int i = 0; i < 30; ++i)
        {
            if (N & (1 << i))
            {
                cout << i << ' ';
            }
        }
    }
}
