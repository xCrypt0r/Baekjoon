/**
 * 2446. 별 찍기 - 9
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 1; i <= N * 2 - 1; ++i)
    {
        cout << string(i <= N ? i - 1 : N * 2 - i - 1, ' ') << string(abs(N - i) * 2 + 1, '*') << endl;
    }
}
