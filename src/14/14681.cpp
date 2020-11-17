/**
 * 14681. 사분면 고르기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 13일
 */

#include <iostream>

using namespace std;

int main()
{
    int x ,y;

    cin >> x;
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << 1 << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << 2 << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << 3 << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << 4 << endl;
    }
}