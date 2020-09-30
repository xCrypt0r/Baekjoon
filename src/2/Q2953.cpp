#include <iostream>

using namespace std;

int main()
{
    int score, sum = 0;
    int index, max = 0;
    
    for (int i = 0; i < 5; ++i)
    {
        sum = 0;

        for (int j = 0; j < 4; ++j)
        {
            cin >> score;

            sum += score;
        }

        if (sum > max)
        {
            max = sum;
            index = i + 1;
        }
    }

    cout << index << ' ' << max;
}
