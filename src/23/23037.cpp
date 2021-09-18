/**
 * 23037. 5의 수난
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,208 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 9월 19일
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string n;
    int sum = 0;

    cin >> n;

    for (int i = 0; i < n.length(); i++)
    {
        sum += pow(n[i] - '0', 5);
    }

    cout << sum << endl;
}