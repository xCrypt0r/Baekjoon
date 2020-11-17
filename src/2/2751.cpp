/**
 * 2751. 수 정렬하기 2
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 5,772 KB
 * 소요 시간: 284 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    int nums[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> nums[i];
    }

    sort(nums, nums + N);

    for (int i = 0; i < N; ++i)
    {
        cout << nums[i] << '\n';
    }
}
