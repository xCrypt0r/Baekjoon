#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;
    cout << max(B - A, C - B) - 1;
}
