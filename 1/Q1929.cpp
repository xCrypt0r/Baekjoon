#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int num);

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int M, N;

    cin >> M >> N;

    for (int i = M; i <= N; ++i)
    {
        if (is_prime(i))
        {
            cout << i << "\n";
        }
    }
}

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}