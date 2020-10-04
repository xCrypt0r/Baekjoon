#include <iostream>

using namespace std;

int main() 
{
    long long int a, b, c, temp;

    cin >> a >> b;

    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }

    c = (long long int) (a + b) * (b - a + 1) / 2;

    cout << c << "\n";
}
