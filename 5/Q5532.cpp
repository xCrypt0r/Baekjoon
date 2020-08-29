#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int L, A, B, C, D;

    cin >> L >> A >> B >> C >> D;
    cout << L - max(A % C ? A / C + 1 : A / C, B % D ? B / D + 1 : B / D);
}
