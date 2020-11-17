/**
 * 1157. 단어 공부
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 4,880 KB
 * 소요 시간: 40 ms
 * 해결 날짜: 2020년 8월 20일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string word;
    int count[26] = { 0, };
    int max = 0;
    int dupe = 0;

    cin >> word;

    transform(word.begin(), word.end(), word.begin(), (int(*)(int))toupper);

    for (const char& c : word)
    {
        count[c - 'A']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (count[i] > max)
        {
            max = count[i];
            dupe = 0;
        }

        if (count[i] == max)
        {
            dupe++;
        }
    }

    if (dupe > 1)
    {
        cout << '?';
    }
    else
    {
        cout << (char)(distance(count, max_element(count , count + 26)) + 'A') << endl;
    }
}