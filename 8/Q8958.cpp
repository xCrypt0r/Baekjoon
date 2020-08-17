#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    string test[N];
    int score[N] = { 0 };
    int combo = 0;

    for (int i = 0; i < N; ++i)
    {
        cin >> test[i];
    }

    for (int i = 0; i < N; ++i)
    {
        for (const char& c : test[i])
        {
            if (c == 'X')
            {
                combo = 0;
            }
            else
            {
                score[i] += ++combo;
            }
        }

        combo = 0;
    }

    for (int i = 0; i < N; ++i)
    {
        cout << score[i] << endl;
    }
}
