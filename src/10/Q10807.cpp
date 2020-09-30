#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, v;

    cin >> N;

    int num[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> num[i];
    }

    cin >> v;
    cout << count(num, num + N, v);
}
