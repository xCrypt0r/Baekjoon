/**
 * 20673. Covid-19
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,020 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 6월 28일
 */

#include <iostream>

using namespace std;

int main()
{
    int p, q;

    cin >> p >> q;

    if (p <= 50 && q <= 10)
    {
        cout << "White" << endl; 
    }
    else if (q >= 30)
    {
        cout << "Red" << endl;
    }
    else
    {
        cout << "Yellow" << endl;
    }
}
