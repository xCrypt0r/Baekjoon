#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int score[6];

    for (int i = 0; i < 6; ++i)
    {
        cin >> score[i];
    }

    sort(score, score + 4, greater<int>());
    sort(score + 4, score + 6, greater<int>());

    cout << score[0] + score[1] + score[2] + score[4];
}
