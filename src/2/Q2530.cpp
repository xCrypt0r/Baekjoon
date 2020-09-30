#include <iostream>

using namespace std;

int main()
{
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    C += D;
    B += C / 60;
    A += B / 60;

    cout << (A % 24) << " " << (B % 60) << " " << (C % 60);
}
