#include <iostream>

using namespace std;

int main()
{
    int n, count[6] = { 1, 1, 2, 2, 2, 8 };

    for (int i = 0; i < 6; ++i)
    {
        cin >> n;
        cout << count[i] - n << " ";
    }
}
