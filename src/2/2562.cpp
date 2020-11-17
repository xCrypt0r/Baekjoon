/**
 * 2562. 최댓값
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int main()
{
    int nums[9];
    int max = 0;
    int idx;

    for (int i = 0; i < 9; ++i)
    {
        cin >> nums[i];

        if (nums[i] > max)
        {
            max = nums[i];
            idx = i;
        }
    }

    cout << max << '\n' << idx + 1;
}