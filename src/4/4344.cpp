#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int C;

    cin >> C;

    double ratio[C];

    for (int i = 0; i < C; ++i)
    {
        int N;

        cin >> N;

        int score[N];
        int avg, sum = 0, count = 0;

        for (int j = 0; j < N; ++j)
        {
            cin >> score[j];
            sum += score[j];
        }

        avg = sum / N;

        for (int j = 0; j < N; ++j)
        {
            if (score[j] > avg)
            {
                count++;
            }
        }

        ratio[i] = (double)count / double(N) * 100;
    }

    cout << fixed;
    cout.precision(3);

    for (int i = 0; i < C; ++i)
    {
        cout << ratio[i] << "%\n";
    }
}
