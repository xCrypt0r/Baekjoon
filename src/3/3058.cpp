#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;

    cin >> T;

    int num, min[T], sum[T] = { 0, };

    fill(min, min + T, 100);

    for (int i = 0; i < T; ++i)
    {
        for (int j = 0; j < 7; ++j)
        {
            cin >> num;

            if (num % 2 == 0)
            {
                if (num < min[i])
                {
                    min[i] = num;
                }

                sum[i] += num;
            }
        }

        cout << sum[i] << " " << min[i] << "\n";
    }
}
