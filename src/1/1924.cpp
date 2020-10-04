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