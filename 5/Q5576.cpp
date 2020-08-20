#include <iostream>
#include <algorithm>

#define SIZE 10

using namespace std;

int main()
{
    int W[SIZE], K[SIZE];

    for (int i = 0; i < SIZE; ++i)
    {
        cin >> W[i];
    }

    for (int i = 0; i < SIZE; ++i)
    {
        cin >> K[i];
    }

    sort(W, W + SIZE, greater<int>());
    sort(K, K + SIZE, greater<int>());

    cout << W[0] + W[1] + W[2] << " " << K[0] + K[1] + K[2];
}
