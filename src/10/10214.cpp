#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;

    cin >> T;

    while (T--)
    {
        int y, k;
        int sum_y = 0, sum_k = 0;

        for (int i = 0; i < 9; ++i)
        {
            cin >> y >> k;

            sum_y += y;
            sum_k += k;
        }

        cout << (sum_y > sum_k ? "Yonsei" : sum_y < sum_k ? "Korea" : "Draw") << "\n";
    }
}
