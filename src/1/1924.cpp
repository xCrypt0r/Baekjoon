/**
 * 1924. 2007년
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>

using namespace std;

int main()
{
    int x, y, sum = 0;
    const int days_of_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    const string days[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

    cin >> x >> y;

    while (--x > 0)
    {
        sum += days_of_month[x - 1];
    }

    sum += y;

    cout << days[sum % 7];
}