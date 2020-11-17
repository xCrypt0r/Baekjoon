/**
 * 5576. 콘테스트
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 20일
 */

#include <iostream>
#include <algorithm>

#define SIZE 10

using namespace std;

int main()
{
    int W[SIZE], K[SIZE];

    for (int i = 0; i < SIZE; ++i)
    {
        cin >> W[i];
    }

    for (int i = 0; i < SIZE; ++i)
    {
        cin >> K[i];
    }

    sort(W, W + SIZE, greater<int>());
    sort(K, K + SIZE, greater<int>());

    cout << W[0] + W[1] + W[2] << " " << K[0] + K[1] + K[2];
}
