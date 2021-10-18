/**
 * 11047. 동전 0
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,020 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 10월 19일
 */

#include <iostream>

using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    int A[N];
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        count += K / A[i];
        K %= A[i];
    }

    cout << count << endl;
}