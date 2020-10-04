#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int A, B, C, D, P;
    int fee_x, fee_y;

    cin >> A >> B >> C >> D >> P;

    fee_x = A * P;
    fee_y = P > C ? B + (P - C) * D : B;

    cout << min(fee_x, fee_y);
}
