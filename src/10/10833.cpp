/**
 * 10833. 사과
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 22일
 */

#include <iostream>

using namespace std;

int main()
{
    int N;
    int student, apple;
    int rest = 0;

    cin >> N;

    while (N--)
    {
        cin >> student >> apple;

        while ((apple -= student) >= 0);

        rest += apple + student;
    }

    cout << rest;
}
