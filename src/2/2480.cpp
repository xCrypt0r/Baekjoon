/**
 * 2480. 주사위 세개
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 12일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, money;

    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        money = 10'000 + a * 1'000;
    }
    else if (a == b || b == c || c ==a)
    {
        money = 1'000 + (a == b ? a : b == c ? b : c) * 100;
    }
    else
    {
        money = max({ a, b, c }) * 100;
    }

    cout << money;
}
