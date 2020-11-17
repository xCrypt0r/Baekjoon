/**
 * 10817. 세 수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 16일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size = 3;
    int nums[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> nums[i];
    }

    sort(nums, nums + size);

    cout << nums[1] << endl;
}
