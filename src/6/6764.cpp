/**
 * 6764. Sounds fishy!
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 12일
 */

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (a < b && b < c && c < d)
    {
        cout << "Fish Rising";
    }
    else if (a > b && b > c && c > d)
    {
        cout << "Fish Diving";
    }
    else if (a == b && b == c && c == d)
    {
        cout << "Fish At Constant Depth";
    }
    else
    {
        cout << "No Fish";
    }
}
