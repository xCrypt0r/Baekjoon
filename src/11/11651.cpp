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
        cin >> coords[i].second >> coords[i].first;
    }

    sort(coords.begin(), coords.end());

    for (const auto& coord : coords)
    {
        cout << coord.second << ' ' << coord.first << '\n';
    }
}
