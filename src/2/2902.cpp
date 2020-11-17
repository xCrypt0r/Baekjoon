/**
 * 2902. KMP는 왜 KMP일까?
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 20일
 */

#include <iostream>

using namespace std;

int main()
{
    string name;
    string shorthand = "";

    cin >> name;

    for (const char& c : name)
    {
        if (isupper(c))
        {
            shorthand += c;
        }
    }

    cout << shorthand;
}