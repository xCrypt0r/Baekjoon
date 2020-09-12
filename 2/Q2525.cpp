#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;

    A += C / 60;
    B += C % 60;

    if (B >= 60)
    {
        A++;
        B %= 60;
    }

    if (A >= 24)
    {
        A %= 24;
    }

    cout << A << " " << B;
}
