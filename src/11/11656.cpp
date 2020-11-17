/**
 * 11656. 접미사 배열
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,520 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string s;
    vector<string> prefix;

    cin >> s;

    for (int i = 0; i < s.length(); ++i)
    {
        prefix.emplace_back(s.substr(i));
    }

    sort(prefix.begin(), prefix.end());

    for (const auto& pre : prefix)
    {
        cout << pre << "\n";
    }
}
