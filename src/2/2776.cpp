/**
 * 2776. 암기왕
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 9,672 KB
 * 소요 시간: 620 ms
 * 해결 날짜: 2020년 9월 13일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N, M;

    cin >> T;

    while (T--)
    {
        cin >> N;

        int note1[N];

        for (int i = 0; i < N; ++i)
        {
            cin >> note1[i];
        }

        cin >> M;

        int note2[M];

        for (int i = 0; i < M; ++i)
        {
            cin >> note2[i];
        }

        sort(note1, note1 + N);

        for (const auto& n : note2)
        {
            cout << binary_search(note1, note1 + N, n) << "\n";
        }
    }
}
