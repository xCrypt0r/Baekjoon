/**
 * 15688. 수 정렬하기 5
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 5,892 KB
 * 소요 시간: 4,752 ms
 * 해결 날짜: 2020년 9월 10일
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

    vector<int> K(N);

    for (auto& k : K)
    {
        cin >> k;
    }

    sort(begin(K), end(K));

    for (const auto& k : K)
    {
        cout << k << "\n";
    }
}
