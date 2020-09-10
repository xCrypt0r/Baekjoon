#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    vector<int> K(N);

    for (auto& k : K)
    {
        cin >> k;
    }

    sort(begin(K), end(K));

    for (const auto& k : K)
    {
        cout << k << "\n";
    }
}
