#include <iostream>

using namespace std;

int main()
{
    const int N = 5, M = 15;
    string input[N];

    for (int i = 0; i < N; ++i)
    {
        getline(cin, input[i]);
    }

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i < input[j].size())
            {
                cout << input[j][i];
            }
        }
    }
}
