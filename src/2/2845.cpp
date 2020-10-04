#include <iostream>

using namespace std;

int main()
{
    int N, P;
    int count;

    cin >> N >> P;

    int expect = N * P;

    for (int i = 0; i < 5; ++i)
    {
        cin >> count;
        cout << count - expect << ' ';
    }
}
