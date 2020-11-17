/**
 * 10991. 별 찍기 - 16
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
    int N;

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        for (int j = i; j <= N - 1; ++j)
        {
            cout << " ";
        }

        for (int j = 1; j <= i * 2 - 1; ++j)
        {
            cout << (j & 1 ? "*" : " ");
        }

        cout << "\n";
    }
}
