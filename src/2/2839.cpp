/**
 * 2839. 설탕 배달
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
    int count = 0;

    cin >> N;

    while (true)
    {
        if (N % 5 == 0)
        {
            cout << count + N / 5;
            break;
        }
        else if (N <= 0)
        {
            cout << -1;
            break;
        }

        N -= 3;
        count++;
    }
}
