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