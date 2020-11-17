/**
 * 10871. X보다 작은 수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 15일
 */

#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, X;

    cin >> N >> X;

    int arr[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];

        if (arr[i] < X)
        {
            cout << arr[i] << " ";
        }
    }
}
