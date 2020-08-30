#include <iostream>

using namespace std;

int main()
{
    const int size = 7;
    int num[size], sum = 0, min = 100;

    for (int i = 0; i < size; ++i)
    {
        cin >> num[i];

        if (num[i] & 1)
        {
            sum += num[i];

            if (num[i] < min)
            {
                min = num[i];
            }
        }
    }

    if (sum > 0)
    {
        cout << sum << "\n" << min;
    }
    else
    {
        cout << -1;
    }
}
