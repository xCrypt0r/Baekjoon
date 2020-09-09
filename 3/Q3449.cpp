#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    string a, b;

    cin >> T;

    while (T--)
    {
        int distance = 0;

        cin >> a >> b;

        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] != b[i])
            {
                distance++;
            }
        }

        cout << "Hamming distance is " << distance << "." << "\n";
    }
}
