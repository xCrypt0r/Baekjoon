/**
 * 5554. 심부름 가는 길
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
    int time, total = 0;

    for (int i = 0; i < 4; ++i)
    {
        cin >> time;

        total += time;
    }

    cout << total / 60 << endl;
    cout << total % 60 << endl;
}
