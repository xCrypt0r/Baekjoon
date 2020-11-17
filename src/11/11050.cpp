/**
 * 11050. 이항 계수 1
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 22일
 */

#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    int N, K;

    cin >> N >> K;
    cout << factorial(N) / factorial(N - K)  / factorial(K);
}

int factorial(int n)
{
    int res = 1;

    for (; n > 0; --n)
    {
        res *= n;
    }

    return res;
}
