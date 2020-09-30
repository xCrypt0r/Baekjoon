#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    const int size = 10;
    int T;

    cin >> T;

    while (T--)
    {
        int A[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> A[i];
        }

        sort(A, A + size);

        cout << A[7] << "\n";
    }
}
