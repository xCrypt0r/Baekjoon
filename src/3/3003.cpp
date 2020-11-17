/**
 * 3003. 킹, 퀸, 룩, 비숍, 나이트, 폰
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 29일
 */

#include <iostream>

using namespace std;

int main()
{
    int n, count[6] = { 1, 1, 2, 2, 2, 8 };

    for (int i = 0; i < 6; ++i)
    {
        cin >> n;
        cout << count[i] - n << " ";
    }
}
