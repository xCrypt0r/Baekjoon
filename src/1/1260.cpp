/**
 * 1260. DFS와 BFS
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 5,936 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2021년 10월 8일
 */

#include <iostream>
#include <queue>

using namespace std;

int N, M, V;
int Adjacent[1001][1001];
bool Visited[1001];

void DFS(int v);
void BFS(int v);

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);

    cin >> N >> M >> V;

    for (int i = 0; i < M; i++)
    {
        int a, b;

        cin >> a >> b;

        Adjacent[a][b] = Adjacent[b][a] = 1;
    }

    DFS(V);

    cout << endl;

    for (int i = 1; i <= N; i++)
    {
        Visited[i] = false;
    }

    BFS(V);
}

void DFS(int v)
{
    Visited[v] = true;

    cout << v << " ";

    for (int i = 1; i <= N; i++)
    {
        if (Adjacent[v][i] == 1 && !Visited[i])
        {
            Visited[i] = true;

            DFS(i);
        }
    }
}

void BFS(int v)
{
    queue<int> q;

    q.push(v);

    Visited[v] = true;

    while (!q.empty())
    {
        v = q.front();

        q.pop();

        cout << v << " ";

        for (int i = 1; i <= N; i++)
        {
            if (Adjacent[v][i] == 1 && !Visited[i])
            {
                Visited[i] = true;

                q.push(i);
            }
        }
    }
}