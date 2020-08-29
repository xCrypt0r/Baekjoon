#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int size = 5;
    int num[size], sum = 0;

    for (int i = 0; i < size; ++i)
    {
        cin >> num[i];

        sum += num[i];
    }

    stable_sort(num, num + size);

    cout << sum / size << "\n" << num[2];
}
