/**
 * 3036. 링
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 22일
 */

#include <iostream>

using namespace std;

int gcd(int a, int b);

int main()
{
    int N, divider;

    cin >> N;

    int ring[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> ring[i];
    }

    for (int i = 1; i < N; ++i)
    {
        divider = gcd(ring[0], ring[i]);

        cout << ring[0] / divider << "/" << ring[i] / divider << "\n";
    }
}

int gcd(int a, int b)
{
	return a % b ? gcd(b, a % b) : b;
}
