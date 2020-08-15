#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, X;

    cin >> N >> X;

    int arr[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];

        if (arr[i] < X)
        {
            cout << arr[i] << " ";
        }
    }
}
