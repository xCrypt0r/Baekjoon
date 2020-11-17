/**
 * 10797. 10부제
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int size = 5;
    int date, num[size];

    cin >> date;

    for (int i = 0; i < size; ++i)
    {
        cin >> num[i];
    }

    cout << count(num, num + size, date);
}
