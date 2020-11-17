/**
 * 2954. 창영이의 일기장
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,140 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 9일
 */

#include <iostream>
#include <regex>

using namespace std;

int main()
{
    string S;
    regex r("([aeiou])p\\1");

    getline(cin, S);
    
    cout << regex_replace(S, r, "$1");
}
