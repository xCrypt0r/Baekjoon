/**
 * 2884. 알람 시계
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
    int hour, minute;
    int _hour, _minute;

    cin >> hour >> minute;

    if (hour > 0)
    {
        if (minute < 45)
        {
            _hour = hour - 1;
            _minute = minute + 15;
        }
        else
        {
            _hour = hour;
            _minute = minute - 45;
        }
    }
    else
    {
        if (minute < 45)
        {
            _hour = hour + 23;
            _minute = minute + 15;
        }
        else
        {
            _hour = hour;
            _minute = minute - 45;
        }
    }

    cout << _hour << " " << _minute << endl;
}