/**
 * 10610. 30
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 3,008 KB
 * 소요 시간: 12 ms
 * 해결 날짜: 2020년 9월 10일
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    string N;
    long long sum = 0;
    
    cin >> N;

    for (const auto& c : N)
    {
        int n = c - '0';

        sum += n;

        a.emplace_back(n);
    }

    if (sum % 3 != 0 || all_of(a.begin(), a.end(), [](int i) { return i != 0; }))
    {
        cout << -1;
    }
    else
    {
        sort(a.begin(), a.end());

        for (int i = a.size() - 1; i >= 0; --i)
        {
            cout << a[i];
        }
    }
}
