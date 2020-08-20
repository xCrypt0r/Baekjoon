#include <iostream>

using namespace std;

int main()
{
    string chessboard[8];
    int count = 0;

    for (int i = 0; i < 8; ++i)
    {
        cin >> chessboard[i];

        for  (int j = 0; j < 8; ++j)
        {
            if ((i + j) % 2 == 0 && chessboard[i][j] == 'F')
            {
                count++;
            }
        }
    }

    cout << count;
}
