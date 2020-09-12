#include <iostream>

using namespace std;

int main()
{
    int N, T, C, P;

    cin >> N >> T >> C >> P;
    cout << (N % T ? N / T : N / T - 1) * C * P;
}
