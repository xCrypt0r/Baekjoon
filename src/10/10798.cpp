/**
 * 10798. 세로읽기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 9일
 */

#include <iostream>

using namespace std;

int main()
{
    const int N = 5, M = 15;
    string input[N];

    for (int i = 0; i < N; ++i)
    {
        getline(cin, input[i]);
    }

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i < input[j].size())
            {
                cout << input[j][i];
            }
        }
    }
}
