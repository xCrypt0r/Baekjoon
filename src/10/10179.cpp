/**
 * 10179. 쿠폰
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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    double price;

    cin >> T;
    cout << fixed;
    cout.precision(2);

    while (T--)
    {
        cin >> price;
        cout << "$" << price * 0.8 << "\n";
    }
}
