/**
 * 3047. ABC
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int nums[3];
    string order;

    for (int i = 0; i < 3; ++i)
    {
        cin >> nums[i];
    }

    cin >> order;

    sort(nums, nums + 3);

    for (const char& c : order)
    {
        if (c == 'A')
        {
            cout << nums[0] << ' ';
            continue;
        }

        if (c == 'B')
        {
            cout << nums[1] << ' ';
            continue;
        }

        if (c == 'C')
        {
            cout << nums[2] << ' ';
            continue;
        }
    }
}