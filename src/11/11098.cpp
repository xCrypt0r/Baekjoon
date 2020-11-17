/**
 * 11098. 첼시를 도와줘!
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 8일
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, P;
    
    cin >> N;

    while (N--)
    {
        cin >> P;

        vector<pair<int, string>> players(P);
        int max_cost = 0;
        string max_cost_player;

        for (int i = 0; i < P; ++i)
        {
            cin >> players[i].first >> players[i].second;

            if (players[i].first > max_cost)
            {
                max_cost = players[i].first;
                max_cost_player = players[i].second;
            }
        }

        cout << max_cost_player << "\n";
    }
}
