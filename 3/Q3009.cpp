#include <iostream>

using namespace std;

int main()
{
    const int size = 3;
    int X[size], Y[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> X[i] >> Y[i];
    }

    int target_x = X[0] == X[1] ? X[2] : (X[0] == X[2] ? X[1] : X[0]);
    int target_y = Y[0] == Y[1] ? Y[2] : (Y[0] == Y[2] ? Y[1] : Y[0]);

    cout << target_x << " " << target_y;     
}
