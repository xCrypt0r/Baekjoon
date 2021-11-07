/**
 * 1966. 프린터 큐
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,024 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 11월 7일
 */

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, priority;

    cin >> T;

    while (T--)
    {
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        int count = 1;

        cin >> N >> M;

        for (int i = 0; i < N; i++)
        {
            cin >> priority;

            q.push(make_pair(priority, i));
            pq.push(priority);
        }

        while (!q.empty())
        {
            pair<int, int> front = q.front();

            if (front.first == pq.top())
            {
                if (front.second == M)
                {
                    cout << count << '\n';

                    break;
                }

                pq.pop();
                count++;
            }
            else
            {
                q.push(front);
            }

            q.pop();
        }
    }
}