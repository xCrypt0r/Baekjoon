#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size = 3;
    int num[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> num[i];
    }

    sort(num, num + size);

    for (int i = 0; i < size; ++i)
    {
        cout << num[i] << " ";
    }
}
