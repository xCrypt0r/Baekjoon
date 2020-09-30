#include <iostream>

using namespace std;

int main()
{
    int K, M, N;

    cin >> K >> M >> N;

    int need = K * M - N;

    cout << (need < 0 ? 0 : need);
}
