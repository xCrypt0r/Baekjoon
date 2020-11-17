/**
 * 1100. 하얀 칸
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 20일
 */

#include <iostream>

using namespace std;

int main()
{
    string chessboard[8];
    int count = 0;

    for (int i = 0; i < 8; ++i)
    {
        cin >> chessboard[i];

        for  (int j = 0; j < 8; ++j)
        {
            if ((i + j) % 2 == 0 && chessboard[i][j] == 'F')
            {
                count++;
            }
        }
    }

    cout << count;
}
