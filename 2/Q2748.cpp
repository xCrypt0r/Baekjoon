#include <iostream>

using namespace std;

long long dp[91] = { 0, 1 };
long long fibonacci(int n);

int main()
{
    int n;

    cin >> n;
    cout << fibonacci(n);
}

long long fibonacci(int n)
{
    if (n <= 1 || dp[n] != 0)
    {
        return dp[n];
    }

    return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}