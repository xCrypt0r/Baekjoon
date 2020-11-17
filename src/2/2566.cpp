/**
 * 2566. 최댓값
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>

using namespace std;

int main()
{
    const int N = 9, M = 9;
    int num[N][M];
    int max = 0, x = 0, y = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> num[i][j];

            if (num[i][j] > max)
            {
                max = num[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }

    cout << max << "\n" << x << " " << y;
}