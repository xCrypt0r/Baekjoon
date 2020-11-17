/**
 * 13241. 최소공배수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 29일
 */

#include <iostream>

using namespace std;

long long gcd(long long a, long long b);

int main()
{
    long long A, B;

    cin >> A >> B;
    cout << A * B / gcd(A, B);
}

long long gcd(long long a, long long b)
{
    return a % b ? gcd(b, a % b) : b;
}
