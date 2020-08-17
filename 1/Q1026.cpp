#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int A[N], B[N];
    int sum = 0;

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i)
    {
        cin >> B[i];
    }

    sort(A, A + N, less<int>());
    sort(B, B + N, greater<int>());

    for (int i = 0; i < N; ++i)
    {
        sum += A[i] * B[i];
    }

    cout << sum;
}
