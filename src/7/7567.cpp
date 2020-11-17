/**
 * 7567. 그릇
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
    string bowls;
    int height = 10;

    cin >> bowls;

    for (int i = 1; i < bowls.length(); ++i)
    {
        height += (bowls[i] == bowls[i - 1] ? 5 : 10);
    }

    cout << height;
}
