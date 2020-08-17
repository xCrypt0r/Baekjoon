#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;

    cin >> N;

    vector<pair<int, int>> coords(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> coords[i].first >> coords[i].second;
    }

    sort(coords.begin(), coords.end());

    for (const auto& coord : coords)
    {
        cout << coord.first << ' ' << coord.second << '\n';
    }
}
