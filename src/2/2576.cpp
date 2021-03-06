/**
 * 2576. 홀수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>

using namespace std;

int main()
{
    const int size = 7;
    int num[size], sum = 0, min = 100;

    for (int i = 0; i < size; ++i)
    {
        cin >> num[i];

        if (num[i] & 1)
        {
            sum += num[i];

            if (num[i] < min)
            {
                min = num[i];
            }
        }
    }

    if (sum > 0)
    {
        cout << sum << "\n" << min;
    }
    else
    {
        cout << -1;
    }
}
