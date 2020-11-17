/**
 * 14490. 백대열
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 26일
 */

#include <iostream>
#include <cstring>
#include <string>

#define N 100

using namespace std;

int gcd(int a, int b);

int main()
{
    char input[N];
    char* token;
    int n, m, divider;
    const char* delim = ":";

    cin >> input;

    token = strtok(input, delim);
    n = stoi(token);
    token = strtok(NULL, delim);
    m = stoi(token);
    divider = gcd(n, m);

    cout << n / divider << ":" << m / divider;
}

int gcd(int a, int b)
{
	return a % b ? gcd(b, a % b) : b;
}
