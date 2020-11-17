/**
 * 2609. 최대공약수와 최소공배수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 29일
 */

#include <iostream>

using namespace std;

int gcd(int a, int b);

int main()
{
    int a, b;

    cin >> a >> b;

    int divider = gcd(a, b);

    cout << divider << "\n" << a * b / divider;
}

int gcd(int a, int b)
{
    return a % b ? gcd(b, a % b) : b;
}
