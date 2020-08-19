#include <iostream>
#define SIZE 10001

using namespace std;

int d(int n);

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    bool arr[SIZE];
    int temp;

    for (int i = 1; i< SIZE; ++i)
    {
        arr[i] = true;
    }

    for (int i = 1; i< SIZE; ++i)
    {
        temp = d(i);

        if (temp < SIZE)
        {
            arr[temp] = false;
        }
    }

    for (int i = 1; i < SIZE; ++i)
    {
        if (arr[i])
        {
            cout << i << "\n";
        }
    }
}

int d(int n)
{
    int sum = n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}