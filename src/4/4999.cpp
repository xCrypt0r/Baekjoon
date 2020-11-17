/**
 * 4999. 아!
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 21일
 */

#include <iostream>

using namespace std;

int main()
{
    string ah, required_ah;
    int ah_count = 0, required_ah_count = 0;

    cin >> ah >> required_ah;

    if (ah.length() >= required_ah.length())
    {
        cout << "go";
    }
    else
    {
        cout << "no";
    }
}