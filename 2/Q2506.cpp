#include <iostream>

using namespace std;

int main()
{
    int N, score = 0, combo = 0;
    bool is_right;

    cin >> N;

    while (N--)
    {
        cin >> is_right;

        if (is_right)
        {
            score += ++combo;
        }
        else
        {
            combo = 0;
        }
    }

    cout << score;
}
