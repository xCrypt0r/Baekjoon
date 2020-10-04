#include <iostream>

using namespace std;

int gcd(int a, int b);

int main()
{
    int a, b;

    cin >> a >> b;

    int divider = gcd(a, b);

    cout << divider << "\n" << a * b / divider;
}

int gcd(int a, int b)
{
    return a % b ? gcd(b, a % b) : b;
}
