/**
 * 11931. 수 정렬하기 4
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 5,772 KB
 * 소요 시간: 708 ms
 * 해결 날짜: 2020년 9월 10일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int num[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> num[i];
    }

    sort(num, num + N, greater<int>());

    for (const auto& n : num)
    {
        cout << n << "\n";
    }
}
