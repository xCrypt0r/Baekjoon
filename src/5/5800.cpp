/**
 * 5800. 성적 통계
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
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

    int K, N;

    cin >> K;

    for (int i = 1; i <= K; ++i)
    {
        cin >> N;

        int score[N], max_gap = 0, gap;

        for (int j = 0; j < N; ++j)
        {
            cin >> score[j];
        }

        sort(score, score + N, greater<int>());

        for (int j = 0; j < N - 1; ++j)
        {
            if ((gap = score[j] - score[j + 1]) > max_gap)
            {
                max_gap = gap;
            }
        }

        cout << "Class " << i << "\n";
        cout << "Max " << score[0] << ", Min " << score[N - 1] << ", Largest gap " << max_gap << "\n";
    }
}
