#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int outerProduct = (x1 * y2 - x2 * y1 + x2 * y3 - x3 * y2 + x3 * y1 - x1 * y3) / 2;

    cout << (outerProduct > 0 ? 1 : outerProduct < 0 ? -1 : 0);
}
