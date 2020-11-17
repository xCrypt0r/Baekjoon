/**
 * 11586. 지영 공주님의 마법 거울
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,120 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 9일
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

    cin >> N;

    string face[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> face[i];
    }

    cin >> K;

    if (K == 1)
    {
        for (int i = 0; i < N; ++i)
        {
            cout << face[i] << "\n";
        }
    }
    else if (K == 2)
    {
        for (int i = 0; i < N; ++i)
        {
            reverse(face[i].begin(), face[i].end());

            cout << face[i] << "\n";
        }
    }
    else if (K == 3)
    {
        for (int i = N - 1; i >= 0; --i)
        {
            cout << face[i] << "\n";
        }
    }
}
