/**
 * 1026. 보물
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int A[N], B[N];
    int sum = 0;

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i)
    {
        cin >> B[i];
    }

    sort(A, A + N, less<int>());
    sort(B, B + N, greater<int>());

    for (int i = 0; i < N; ++i)
    {
        sum += A[i] * B[i];
    }

    cout << sum;
}
