/**
 * 2490. 윷놀이
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int N = 3, M = 4;
    const string status[5] = { "E", "A", "B", "C", "D" };
    int yut[N][M];
    int cnt = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> yut[i][j];
        }

        cnt = count(yut[i], yut[i] + M, 0);
        
        cout << status[cnt] << '\n';
    }
}
