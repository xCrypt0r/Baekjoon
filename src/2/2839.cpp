#include <iostream>

using namespace std;

int main()
{
    int N;
    int count = 0;

    cin >> N;

    while (true)
    {
        if (N % 5 == 0)
        {
            cout << count + N / 5;
            break;
        }
        else if (N <= 0)
        {
            cout << -1;
            break;
        }

        N -= 3;
        count++;
    }
}
