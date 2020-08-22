#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int score, sum = 0, sum2 = 0;

    for (int i = 0; i < 4; ++i)
    {
        cin >> score;

        sum += score;
    }

    for (int i = 0; i < 4; ++i)
    {
        cin >> score;

        sum2 += score;
    }

    cout << max(sum, sum2);
}
