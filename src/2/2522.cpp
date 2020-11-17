/**
 * 2522. 별 찍기 - 12
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
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int N;

    cin >> N;

    for (int i = 1; i < N * 2; ++i)
    {
        cout << string(abs(N - i), ' ') << string(i <= N ? i : N * 2 - i, '*') << '\n';
    }
}
