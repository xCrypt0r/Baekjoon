#include <iostream>

using namespace std;

int main()
{
    long long R, C, N;

    cin >> R >> C >> N;
    cout << (R / N + (R % N ? 1 : 0)) * (C / N + (C % N ? 1 : 0));
}
