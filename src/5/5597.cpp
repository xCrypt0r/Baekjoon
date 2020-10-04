#include <iostream>

using namespace std;

int main()
{
    bool check[31] = { false, };
    int num;

    for (int i = 1; i <= 28; ++i)
    {
        cin >> num;

        check[num] = true;
    }

    for (int i = 1; i <= 30; ++i)
    {
        if (!check[i])
        {
            cout << i << "\n";
        }
    }
}
