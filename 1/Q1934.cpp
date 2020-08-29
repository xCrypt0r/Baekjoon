#include <iostream>

using namespace std;

int gcd(int a, int b);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, A, B;

    cin >> T;

    while (T--)
    {
        cin >> A >> B;
        cout << A * B / gcd(A, B) << "\n";
    }
}

int gcd(int a, int b)
{
    return a % b ? gcd(b, a % b) : b;
}
