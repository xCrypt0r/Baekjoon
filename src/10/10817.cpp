#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size = 3;
    int nums[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> nums[i];
    }

    sort(nums, nums + size);

    cout << nums[1] << endl;
}
