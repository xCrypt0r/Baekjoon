#include <iostream>

using namespace std;

int main()
{
    int N;
    int a, b, c, count = 0;

    cin >> N;

    if (N < 100)
    {
        count = N;
    }
    else
    {
        count = 99;

        for (int i = 100; i <= N; ++i)
        {
            a = i / 100;
            b = (i / 10) % 10;
            c = i % 10;

            if (a - b == b - c)
            {
                count++;
            }
        }
    }

    cout << count;
}
