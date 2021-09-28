/**
 * 14729. 칠무해
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 39,160 KB
 * 소요 시간: 3,260 ms
 * 해결 날짜: 2021년 9월 29일
 */

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    float score[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> score[i];
    }

    sort(score, score + N, less<float>());

    cout << fixed << setprecision(3);

    for (int i = 0; i < 7; ++i)
    {
        cout << score[i] << '\n';
    }
}