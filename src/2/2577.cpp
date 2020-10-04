#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    int count[10] = { 0 };

    cin >> A >> B >> C;

    int res = A * B * C;

    while (res != 0)
    {
        count[res % 10]++;
        res /= 10;
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << count[i] << '\n';
    }
}
