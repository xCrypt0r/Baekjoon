#include <iostream>

using namespace std;

int main()
{
    int nums[9];
    int max = 0;
    int idx;

    for (int i = 0; i < 9; ++i)
    {
        cin >> nums[i];

        if (nums[i] > max)
        {
            max = nums[i];
            idx = i;
        }
    }

    cout << max << '\n' << idx + 1;
}