/**
 * 2693. N번째 큰 수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 10일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    const int size = 10;
    int T;

    cin >> T;

    while (T--)
    {
        int A[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> A[i];
        }

        sort(A, A + size);

        cout << A[7] << "\n";
    }
}
