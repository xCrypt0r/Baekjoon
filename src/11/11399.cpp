/**
 * 11399. ATM
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 20일
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    int sum = 0;

    cin >> N;
    
    vector<int> P(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> P[i];
    }

    sort(P.begin(), P.end());

    for (int i = 0; i < N; ++i)
    {
        sum += P[i] * (N - i);
    }

    cout << sum << endl;
}
