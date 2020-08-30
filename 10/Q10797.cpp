#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int size = 5;
    int date, num[size];

    cin >> date;

    for (int i = 0; i < size; ++i)
    {
        cin >> num[i];
    }

    cout << count(num, num + size, date);
}
