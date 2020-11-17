/**
 * 16673. 고려대학교에는 공식 와인이 있다
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 23일
 */

#include <iostream>

using namespace std;

int main()
{
    int C, K, P;
    int sum = 0;

    cin >> C >> K >> P;
    
    for (int n = 1; n <= C; ++n)
    {
        sum += K * n + P * n * n;
    }

    cout << sum;
}
