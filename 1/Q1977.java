#include <iostream>

using namespace std;

int main() 
{
    int m, n, min = 0, sum = 0;

    cin >> m >> n;

    for(int i = m; i <= n; i++)
    {
        int j = 1;

        while(j * j < i)
        {
            j++;
        }

        if(j * j == i)
        {
            sum += j * j;
        }

        if(min == 0)
        {
            min = j * j;
        }
    }

    if(sum == 0)
    {
        cout << "-1";
    }
    else
    {
        cout << sum << "\n" << min << "\n";
    }
}
