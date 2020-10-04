#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    int score = 100, score2 = 100;

    cin >> n;

    while (n--)
    {
        cin >> x >> y;

        if (x > y)
        {
            score2 -= x;
        }
        else if (x < y)
        {
            score -= y;
        }
    }

    cout << score << "\n" << score2;
}
