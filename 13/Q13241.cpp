#include <iostream>

using namespace std;

long long gcd(long long a, long long b);

int main()
{
    long long A, B;

    cin >> A >> B;
    cout << A * B / gcd(A, B);
}

long long gcd(long long a, long long b)
{
    return a % b ? gcd(b, a % b) : b;
}
