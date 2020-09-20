#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n[3] = { }, times = 0, mintime = 0;

    cin >> n[0] >> n[1] >> n[2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            times += (n[j] * abs(j - i) * 2);
        } 

        if (i == 0)
        { 
            mintime = times;
        }
        else if (times < mintime)
        { 
            mintime = times;
        }

        times = 0;
    }

    cout << mintime;

    return 0;
}
