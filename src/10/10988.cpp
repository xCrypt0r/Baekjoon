/**
 * 10988. 팰린드롬인지 확인하기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>

using namespace std;

int main()
{
    string s;
    bool is_palindrome = true;

    cin >> s;

    for (int head = 0, tail = s.length() - 1; head <= tail; head++, tail--)
    {
        if (s[head] != s[tail])
        {
            is_palindrome = false;

            break;
        }
    }

    cout << is_palindrome;
}
