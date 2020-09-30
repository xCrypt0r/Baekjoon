#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    int sum = 0;

    cin >> N;
    
    vector<int> P(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> P[i];
    }

    sort(P.begin(), P.end());

    for (int i = 0; i < N; ++i)
    {
        sum += P[i] * (N - i);
    }

    cout << sum << endl;
}
