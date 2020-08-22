#include <iostream>

using namespace std;

int gcd(int a, int b);

int main()
{
    int N, divider;

    cin >> N;

    int ring[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> ring[i];
    }

    for (int i = 1; i < N; ++i)
    {
        divider = gcd(ring[0], ring[i]);

        cout << ring[0] / divider << "/" << ring[i] / divider << "\n";
    }
}

int gcd(int a, int b)
{
	return a % b ? gcd(b, a % b) : b;
}
