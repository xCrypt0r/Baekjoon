/**
 * 18406. 럭키 스트레이트
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>

using namespace std;

int main()
{
    string N;

    cin >> N;

    int middle = N.size() / 2;
    int sum = 0, sum2 = 0;

    for (int i = 0; i < middle; ++i)
    {
        sum += N[i] - '0';
    }

    for (int i = middle; i < N.size(); ++i)
    {
        sum2 += N[i] - '0';
    }

    cout << (sum == sum2 ? "LUCKY" : "READY");
}
