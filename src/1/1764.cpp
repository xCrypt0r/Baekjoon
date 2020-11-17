/**
 * 1764. 듣보잡
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 5,808 KB
 * 소요 시간: 28 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;

    cin >> N >> M;

    string name, list[N];
    vector<string> result;

    for (int i = 0; i < N; ++i)
    {
        cin >> list[i];
    }

    sort(list, list + N);

    for (int i = 0; i < M; ++i)
    {
        cin >> name;

        if (binary_search(list, list + N, name))
        {
            result.emplace_back(name);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << "\n";

    for (const auto& r : result)
    {
        cout << r << "\n";
    }
}
