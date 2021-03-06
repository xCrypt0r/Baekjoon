/**
 * 2495. 연속구간
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 8일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int SIZE = 3;
    string S[SIZE];
    int combo[SIZE], max_combo[SIZE];

    fill(combo, combo + SIZE, 1);
    fill(max_combo, max_combo + SIZE, 1);

    cin >> S[0] >> S[1] >> S[2];

    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 1; j < S[i].size(); ++j)
        {
            if (S[i][j] == S[i][j - 1])
            {
                combo[i]++;

                if (combo[i] > max_combo[i])
                {
                    max_combo[i] = combo[i];
                }
            }
            else
            {
                combo[i] = 1;
            }
        }

        cout << max_combo[i] << "\n";
    }
}
