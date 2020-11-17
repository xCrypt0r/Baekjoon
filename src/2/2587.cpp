/**
 * 2587. 대표값2
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 29일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int size = 5;
    int num[size], sum = 0;

    for (int i = 0; i < size; ++i)
    {
        cin >> num[i];

        sum += num[i];
    }

    stable_sort(num, num + size);

    cout << sum / size << "\n" << num[2];
}
