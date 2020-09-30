#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, W, H, len;

    cin >> N >> W >> H;

    while (N--)
    {
        cin >> len;

        if (len <= W || len <= H || len <= sqrt(W * W + H * H))
        {
            cout << "DA\n";
        }
        else
        {
            cout << "NE\n";
        }
    }
}
