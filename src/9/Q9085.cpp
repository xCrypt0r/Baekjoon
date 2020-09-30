#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;
    int num, sum = 0;

    cin >> T;

    while (T--)
    {
        cin >> N;

        sum = 0;

        while (N--)
        {
            cin >> num;

            sum += num;
        }

        cout << sum << '\n';
    }
}
