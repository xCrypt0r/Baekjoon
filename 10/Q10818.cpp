#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int nums[N];
    int max = -1000000;
    int min = 1000000;

    for (int i = 0; i < N; ++i)
    {
        cin >> nums[i];

        if (nums[i] > max)
        {
            max = nums[i];
        }

        if (nums[i] < min)
        {
            min = nums[i];
        }
    }

    cout << min << ' ' << max;
}