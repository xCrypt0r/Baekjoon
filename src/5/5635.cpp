/**
 * 5635. 생일
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,992 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 13일
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    vector<pair<pair<int, int>, pair<int, string>>> students(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> students[i].second.second
            >> students[i].second.first
            >> students[i].first.second
            >> students[i].first.first;
    }

    sort(students.begin(), students.end());

    cout << students[N - 1].second.second << "\n" << students[0].second.second;
}
