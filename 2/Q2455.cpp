#include <iostream>
#include <algorithm>

#define SIZE 4

using namespace std;

int main()
{
    int in, out;
    int count[SIZE] = { 0 };

    for (int i = 0; i < SIZE; ++i)
    {
        cin >> out >> in;

        if (i > 0)
        {
            count[i] = count[i - 1];
        }

        count[i] += (in - out);
    }

    cout << *max_element(count, count + SIZE);
}
