#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;

    if (A + B + C == 180)
    {
        if (A == B && B == C)
        {
            cout << "Equilateral";
        }
        else if (A == B || B == C || C == A)
        {
            cout << "Isosceles";
        }
        else
        {
            cout << "Scalene";
        }
    }
    else
    {
        cout << "Error";
    }
}
