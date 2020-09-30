#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    int nums[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> nums[i];
    }

    sort(nums, nums + N);

    for (int i = 0; i < N; ++i)
    {
        cout << nums[i] << '\n';
    }
}
