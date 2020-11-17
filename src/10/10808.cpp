/**
 * 10808. 알파벳 개수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 20일
 */

#include <iostream>

using namespace std;

int main()
{
    string word;
    int count[26] = { 0, };

    cin >> word;

    for (const char& c : word)
    {
        count[c - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        cout << count[i] << " ";
    }
}