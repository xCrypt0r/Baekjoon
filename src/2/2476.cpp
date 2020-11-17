/**
 * 2476. 주사위 게임
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 11일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, a, b, c;

    cin >> N;

    int money[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> a >> b >> c;

        if (a == b && b == c)
        {
            money[i] = 10'000 + a * 1'000;
        }
        else if (a == b || b == c || c ==a)
        {
            money[i] = 1'000 + (a == b ? a : b == c ? b : c) * 100;
        }
        else
        {
            money[i] = max({ a, b, c }) * 100;
        }
    }

    cout << *max_element(money, money + N);
}
