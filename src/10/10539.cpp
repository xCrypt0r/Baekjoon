/**
 * 10539. 수빈이와 수열
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum = 0;

    cin >> N;

    int A[N], B[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> B[i];
        
        A[i] = B[i] * (i + 1);

        if (i > 0)
        {
            A[i] -= sum;
        }

        sum += A[i];

        cout << A[i] << " ";
    }
}
