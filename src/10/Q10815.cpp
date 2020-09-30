#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;

    cin >> N;

    int cards[N], num;

    for (int i = 0; i < N; ++i)
    {
        cin >> cards[i];
    }

    sort(cards, cards + N);

    cin >> M;

    while (M--)
    {
        cin >> num;

        if (binary_search(cards, cards + N, num))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}
