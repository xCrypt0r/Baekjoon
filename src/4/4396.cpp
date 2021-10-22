/**
 * 4396. 지뢰 찾기
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,024 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 10월 22일
 */

#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    string board[n];
    string opened[n];
    string mark[n];
    bool is_dead = false;

    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> opened[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (opened[i][j] == 'x')
            {
                if (board[i][j] == '*')
                {
                    is_dead = true;

                    continue;
                }

                int count = 0;

                if (i > 0 && j > 0 && board[i - 1][j - 1] == '*')
                {
                    count++;
                }

                if (i > 0 && board[i - 1][j] == '*')
                {
                    count++;
                }

                if (i > 0 && j < n - 1 && board[i - 1][j + 1] == '*')
                {
                    count++;
                }

                if (j > 0 && board[i][j - 1] == '*')
                {
                    count++;
                }

                if (j < n - 1 && board[i][j + 1] == '*')
                {
                    count++;
                }

                if (i < n - 1 && j > 0 && board[i + 1][j - 1] == '*')
                {
                    count++;
                }

                if (i < n - 1 && board[i + 1][j] == '*')
                {
                    count++;
                }

                if (i < n - 1 && j < n - 1 && board[i + 1][j + 1] == '*')
                {
                    count++;
                }

                mark[i][j] = count + '0';
            }
            else
            {
                mark[i][j] = '.';
            }
        }
    }

    if (is_dead)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == '*')
                {
                    mark[i][j] = '*';
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mark[i][j];
        }

        cout << endl;
    }
}