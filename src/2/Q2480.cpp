#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, money;

    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        money = 10'000 + a * 1'000;
    }
    else if (a == b || b == c || c ==a)
    {
        money = 1'000 + (a == b ? a : b == c ? b : c) * 100;
    }
    else
    {
        money = max({ a, b, c }) * 100;
    }

    cout << money;
}
