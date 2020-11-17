/**
 * 10872. 팩토리얼
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int main()
{
    int N;
    int fact = 1;

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        fact *= i;
    }

    cout << fact;
}
