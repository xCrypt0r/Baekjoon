/**
 * 2441. 별 찍기 - 4
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int N;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << ' ';
        }

        for (int j = 0; j < N - i; ++j)
        {
            cout << '*';
        }

        cout << '\n';
    }
}
