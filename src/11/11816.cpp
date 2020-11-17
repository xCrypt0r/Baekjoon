/**
 * 11816. 8진수, 10진수, 16진수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,980 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 23일
 */

#include <iostream>

using namespace std;

int main()
{
    cin.unsetf(ios::dec);
    cin.unsetf(ios::hex);
    cin.unsetf(ios::oct);

    int X;

    cin >> X;
    cout << X;
}
