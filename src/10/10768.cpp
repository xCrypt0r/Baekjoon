/**
 * 10768. 특별한 날
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 12일
 */

#include <iostream>

using namespace std;

int main()
{
    int M, D;

    cin >> M >> D;

    if (M < 2)
    {
        cout << "Before";
    }
    else if (M == 2)
    {
        cout << (D > 18 ? "After" : D < 18 ? "Before" : "Special");
    }
    else
    {
        cout << "After";
    }
}
