#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    int quadrant[5] = { 0, };

    cin >> n;

    while (n--)
    {
        cin >> x >> y;

        if (x == 0 || y == 0)
        {
            quadrant[0]++;
        }
        else if (x > 0 && y > 0)
        {
            quadrant[1]++;
        }
        else if (x < 0 && y > 0)
        {
            quadrant[2]++;
        }
        else if (x < 0 && y < 0)
        {
            quadrant[3]++;
        }
        else if (x > 0 && y < 0)
        {
            quadrant[4]++;
        }
    }

    cout << "Q1: " << quadrant[1] << "\n";
    cout << "Q2: " << quadrant[2] << "\n";
    cout << "Q3: " << quadrant[3] << "\n";
    cout << "Q4: " << quadrant[4] << "\n";
    cout << "AXIS: " << quadrant[0] << "\n";
}
