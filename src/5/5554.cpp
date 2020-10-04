#include <iostream>

using namespace std;

int main()
{
    int time, total = 0;

    for (int i = 0; i < 4; ++i)
    {
        cin >> time;

        total += time;
    }

    cout << total / 60 << endl;
    cout << total % 60 << endl;
}
