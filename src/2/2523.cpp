/**
 * 2523. 별 찍기 - 13
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 16일
 */

#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 1; i <= N * 2 - 1; ++i)
    {
        for (int j = N; j > abs(N - i); --j)
        {
            cout << "*";
        }

        cout << "\n";
    }
}
