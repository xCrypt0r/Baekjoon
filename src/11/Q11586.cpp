#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;

    cin >> N;

    string face[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> face[i];
    }

    cin >> K;

    if (K == 1)
    {
        for (int i = 0; i < N; ++i)
        {
            cout << face[i] << "\n";
        }
    }
    else if (K == 2)
    {
        for (int i = 0; i < N; ++i)
        {
            reverse(face[i].begin(), face[i].end());

            cout << face[i] << "\n";
        }
    }
    else if (K == 3)
    {
        for (int i = N - 1; i >= 0; --i)
        {
            cout << face[i] << "\n";
        }
    }
}
