#include <iostream>
#include <string>

using namespace std;

int main()
{
    string N;
    int B, temp, res = 0;

    cin >> N >> B;

    for (int i = 0; i < N.length(); ++i)
    {
        temp = isalpha(N[i]) ? N[i] - 55 : N[i] - 48;

        for (int j = 0; j < N.length() - i - 1; ++j)
        {
            temp *= B;
        }

        res += temp;
    }

    cout << res;
}
