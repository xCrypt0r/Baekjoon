#include <iostream>

using namespace std;

int main()
{
    int D, H, M;

    cin >> D >> H >> M;

    int spent = (D - 11) * 1440 + (H - 11) * 60 + (M - 11);

    cout << (spent < 0 ? -1 : spent);
}
