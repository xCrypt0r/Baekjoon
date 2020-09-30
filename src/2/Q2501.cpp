#include <iostream>

using namespace std;

int get_nth_factor(int n, int k);

int main()
{
    int N, K;

    cin >> N >> K;
    cout << get_nth_factor(N, K);
}

int get_nth_factor(int n, int k)
{
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0 && --k == 0)
        {       
            return i;
        }
    }

    return 0;
}
