#include <iostream>

using namespace std;

int main()
{
    int C, K, P;
    int sum = 0;

    cin >> C >> K >> P;
    
    for (int n = 1; n <= C; ++n)
    {
        sum += K * n + P * n * n;
    }

    cout << sum;
}
