/**
 * 11004. K번째 수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 21,392 KB
 * 소요 시간: 1,084 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;

    cin >> N >> K;

    int A[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    sort(A, A + N);
    
    cout << A[K - 1];
}
