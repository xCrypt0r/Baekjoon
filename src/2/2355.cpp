/**
 * 2355. 시그마
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 24일
 */

#include <iostream>

using namespace std;

int main() 
{
    long long int a, b, c, temp;

    cin >> a >> b;

    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }

    c = (long long int) (a + b) * (b - a + 1) / 2;

    cout << c << "\n";
}
