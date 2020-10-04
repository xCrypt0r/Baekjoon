#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;
    
    if ((A + B) & 1 || A < B)
    {
        cout << -1;
    }
    else
    {
        cout << (A + B) / 2 << " " << (A - B) / 2;
    }
}
