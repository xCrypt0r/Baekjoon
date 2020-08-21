#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4, n5;

    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << (n1 * n1 + n2 * n2 + n3 * n3 + n4 * n4 + n5 * n5) % 10;
}
