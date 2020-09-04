#include <iostream>

using namespace std;

int get_sum(int n);

int main()
{
    int N;
    bool has_creator;

    cin >> N;

    for (int i = 1; i <= 1000000; ++i)
    {
        has_creator = false;

        if (get_sum(i) == N)
        {
            cout << i;

            has_creator = true;

            break;
        }
    }

    if (!has_creator)
    {
        cout << 0;
    }
}

int get_sum(int n)
{
    int sum = n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}
