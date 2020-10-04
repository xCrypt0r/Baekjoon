#include <iostream>

using namespace std;

int main()
{
    int M, F;

    while (true)
    {
        cin >> M >> F;

        if (M == 0 && F == 0)
        {
            break;
        }

        cout << M + F << "\n";
    }
}
