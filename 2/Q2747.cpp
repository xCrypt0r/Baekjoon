#include <iostream>

using namespace std;

int dp[91] = { 0, 1 };
int fibonacci(int n);

int main()
{
    int n;

    cin >> n;
    cout << fibonacci(n);
}

int fibonacci(int n)
{
    if (n <= 1 || dp[n] != 0)
    {
        return dp[n];
    }

    return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}