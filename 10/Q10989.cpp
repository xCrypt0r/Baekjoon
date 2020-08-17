#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, temp;
    short count[10001] = { 0 };

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> temp;
        count[temp]++;
    }

    for (int i = 1; i <= 10000; ++i)
    {
        for (int j = 0; j < count[i]; ++j)
        {
            cout << i << '\n';
        }
    }
}
