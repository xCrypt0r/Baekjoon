/**
 * 2439. 별 찍기 - 2
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 8월 15일
 */

#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        cout << string(N - i, ' ') << string(i, '*') << endl;
    }
}
