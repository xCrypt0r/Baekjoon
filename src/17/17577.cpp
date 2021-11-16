/**
 * 17577. Scores of Final Examination
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,020 KB
 * 소요 시간: 12 ms
 * 해결 날짜: 2021년 11월 17일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        int n, m;

        cin >> n >> m;

        if (n == 0 && m == 0)
        {
            break;
        }

        int scores[1000] = { 0 };

        for (int i = 0; i < m; i++)
        {
            int p[n];

            for (int j = 0; j < n; j++)
            {
                cin >> p[j];

                scores[j] += p[j];
            }
        }

        cout << *max_element(scores, scores + n) << endl;
    }
}