/**
 * 2753. 윤년
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 13일
 */

#include <iostream>

using namespace std;

int main()
{
    int year;

    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}