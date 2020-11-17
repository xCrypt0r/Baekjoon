/**
 * 2744. 대소문자 바꾸기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word, res;

    cin >> word;

    for (const auto& c : word)
    {
        res += isupper(c) ? tolower(c) : toupper(c);
    }

    cout << res;
}
