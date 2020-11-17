/**
 * 10818. 최소, 최대
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 5,768 KB
 * 소요 시간: 464 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int nums[N];
    int max = -1000000;
    int min = 1000000;

    for (int i = 0; i < N; ++i)
    {
        cin >> nums[i];

        if (nums[i] > max)
        {
            max = nums[i];
        }

        if (nums[i] < min)
        {
            min = nums[i];
        }
    }

    cout << min << ' ' << max;
}