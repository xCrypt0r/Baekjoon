/**
 * 4402. Soundex
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 12일
 */

#include <iostream>

using namespace std;

const int size = 6;
const string soundexes [size] = { "BFPV", "CGJKQSXZ", "DT", "L", "MN", "R" };

int get_soundex(char c);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    
    while (cin >> word)
    {
        int prev = 0, soundex = 0;

        for (const auto& c : word)
        {
            soundex = get_soundex(c);

            if (soundex == 0)
            {
                prev = 0;
            }
            else
            {
                if (soundex != prev)
                {
                    cout << soundex;

                    prev = soundex;
                }
            }
        }
            
        cout << "\n";
    }
}

int get_soundex(char c)
{
    for (int i = 1; i <= size; ++i)
    {
        if (soundexes[i - 1].find(c) != -1)
        {
            return i;
        }
    }

    return 0;
}
