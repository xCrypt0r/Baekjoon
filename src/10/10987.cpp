/**
 * 10987. 모음의 개수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 21일
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    string vowels = "aeiou";
    int count = 0;

    cin >> word;

    for (const char& c : word)
    {
        if (vowels.find(c) != string::npos)
        {
            count++;
        }
    }

    cout << count;
}
