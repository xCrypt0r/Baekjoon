/**
 * 11720. 숫자의 합
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
    char c;
    int sum = 0;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> c;
        sum += (c - '0');
    }

    cout << sum;
}
