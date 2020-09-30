#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num, sum = 0;

    while (cin >> num)
    {
        sum += num;
    }

    cout << sum;
}
