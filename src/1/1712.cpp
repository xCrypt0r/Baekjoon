#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;
    cout << (B < C ? (A / (C - B)) + 1 : -1);
}
