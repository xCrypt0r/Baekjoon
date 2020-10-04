#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int nums[10];
    vector<int> remainders;

    for (int i = 0; i < 10; ++i)
    {
        cin >> nums[i];
        remainders.push_back(nums[i] % 42);
    }

    sort(remainders.begin(), remainders.end());
    remainders.erase(unique(remainders.begin(), remainders.end()), remainders.end());

    cout << remainders.size();
}