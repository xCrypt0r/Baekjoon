/**
 * 11650. 좌표 정렬하기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,768 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;

    cin >> N;

    vector<pair<int, int>> coords(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> coords[i].first >> coords[i].second;
    }

    sort(coords.begin(), coords.end());

    for (const auto& coord : coords)
    {
        cout << coord.first << ' ' << coord.second << '\n';
    }
}
