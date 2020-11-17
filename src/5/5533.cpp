/**
 * 5533. 유니크
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 23일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int n1[N], n2[N], n3[N], score[N] = { 0, };

    for (int i = 0; i < N; ++i)
    {
        cin >> n1[i] >> n2[i] >> n3[i];
    }

    for (int i = 0; i < N; ++i)
    {
        if (count(n1, n1 + N, n1[i]) == 1)
        {
            score[i] += n1[i];
        }

        if (count(n2, n2 + N, n2[i]) == 1)
        {
            score[i] += n2[i];
        }

        if (count(n3, n3 + N, n3[i]) == 1)
        {
            score[i] += n3[i];
        }

        cout << score[i] << "\n";
    }
}
