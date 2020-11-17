/**
 * 8958. OX퀴즈
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    string test[N];
    int score[N] = { 0 };
    int combo = 0;

    for (int i = 0; i < N; ++i)
    {
        cin >> test[i];
    }

    for (int i = 0; i < N; ++i)
    {
        for (const char& c : test[i])
        {
            if (c == 'X')
            {
                combo = 0;
            }
            else
            {
                score[i] += ++combo;
            }
        }

        combo = 0;
    }

    for (int i = 0; i < N; ++i)
    {
        cout << score[i] << endl;
    }
}
