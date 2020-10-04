#include <iostream>

using namespace std;

int main()
{
    string N;

    cin >> N;

    int middle = N.size() / 2;
    int sum = 0, sum2 = 0;

    for (int i = 0; i < middle; ++i)
    {
        sum += N[i] - '0';
    }

    for (int i = middle; i < N.size(); ++i)
    {
        sum2 += N[i] - '0';
    }

    cout << (sum == sum2 ? "LUCKY" : "READY");
}
