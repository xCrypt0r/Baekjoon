#include <iostream>

using namespace std;

int main()
{
    int N;
    string name;
    int score = 0;

    cin >> N >> name;

    for (int i = 0; i < N; ++i)
    {
        score += name[i] - 64;
    }

    cout << score;
}
