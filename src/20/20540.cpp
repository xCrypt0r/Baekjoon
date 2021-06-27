/**
 * 20540. 연길이의 이상형
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,028 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 6월 28일
 */

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, char> opposite = {
        { 'E', 'I' }, { 'I', 'E' },
        { 'S', 'N' }, { 'N', 'S' },
        { 'T', 'F' }, { 'F', 'T' },
        { 'J', 'P' }, { 'P', 'J' }
    };
    string mbti;

    cin >> mbti;

    for (int i = 0; i < 4; ++i)
    {
        cout << opposite[mbti[i]];
    }
}
