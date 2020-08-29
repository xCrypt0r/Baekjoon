#include <iostream>

using namespace std;

int main()
{
    const int size = 8;
    int num[size], asc = 0, desc = 0;

    for (int i = 0; i < size; ++i)
    {
        cin >> num[i];

        if (num[i] == i + 1)
        {
            asc++;
        }
        else if (num[i] == 8 - i)
        {
            desc++;
        }
    }

    cout << (asc == 8 ? "ascending" : desc == 8 ? "descending" : "mixed");
}
