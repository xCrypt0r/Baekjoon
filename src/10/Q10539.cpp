#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum = 0;

    cin >> N;

    int A[N], B[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> B[i];
        
        A[i] = B[i] * (i + 1);

        if (i > 0)
        {
            A[i] -= sum;
        }

        sum += A[i];

        cout << A[i] << " ";
    }
}
