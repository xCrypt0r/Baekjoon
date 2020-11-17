/**
 * 10814. 나이순 정렬
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 11,036 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b);

int main()
{
    int N;

    cin >> N;

    vector<pair<int, string>> members;
    pair<int, string> member;

    for (int i = 0; i < N; ++i)
    {
        cin >> member.first >> member.second;
        members.push_back(member);
    }

    stable_sort(members.begin(), members.end(), compare);

    for (int i = 0; i < N; ++i)
    {
        cout << members[i].first << ' ' << members[i].second << '\n';
    }
}

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}
