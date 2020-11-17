/**
 * 2845. 파티가 끝나고 난 뒤
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
    int N, P;
    int count;

    cin >> N >> P;

    int expect = N * P;

    for (int i = 0; i < 5; ++i)
    {
        cin >> count;
        cout << count - expect << ' ';
    }
}
