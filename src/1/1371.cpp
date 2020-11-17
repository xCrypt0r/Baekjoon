/**
 * 1371. 가장 많은 글자
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 23일
 */

#include <iostream>
#include <algorithm>
#include <locale>

using namespace std;

int main()
{
    string s;
    int count[26] = { 0, };

    while (cin >> s)
    {
        for (const char& c : s)
        {
            if (isalpha(c))
            {
                count[c - 'a']++;
            }
        }
    }

    int max_count =  *max_element(count, count + 26);

    for (int i = 0; i < 26; ++i)
    {
        if (count[i] == max_count)
        {
            cout << (char)(i + 'a');
        }
    }
}
