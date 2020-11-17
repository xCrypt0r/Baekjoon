/**
 * 3052. 나머지
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int nums[10];
    vector<int> remainders;

    for (int i = 0; i < 10; ++i)
    {
        cin >> nums[i];
        remainders.push_back(nums[i] % 42);
    }

    sort(remainders.begin(), remainders.end());
    remainders.erase(unique(remainders.begin(), remainders.end()), remainders.end());

    cout << remainders.size();
}