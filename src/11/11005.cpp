#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, B, reminder, sum = 0;
    string res;

    cin >> N >> B;

    while (N > 0)
    {
        reminder = N % B;
        N /= B;
        res += (char)(reminder > 9 ? reminder + 55 : reminder + 48);
    }

    reverse(res.begin(), res.end());

    cout << res;
}
