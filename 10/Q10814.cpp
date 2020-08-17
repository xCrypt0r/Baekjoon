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
