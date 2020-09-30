#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    int N, K;

    cin >> N >> K;
    cout << factorial(N) / factorial(N - K)  / factorial(K);
}

int factorial(int n)
{
    int res = 1;

    for (; n > 0; --n)
    {
        res *= n;
    }

    return res;
}
