#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int r, e, c, gain;

    cin >> N;

    while (N--)
    {
        cin >> r >> e >> c;

        gain = e - c;

        if (r < gain)
        {
            cout << "advertise\n";
        }
        else if (r > gain)
        {
            cout << "do not advertise\n";
        }
        else
        {
            cout << "does not matter\n";
        }
    }
}
