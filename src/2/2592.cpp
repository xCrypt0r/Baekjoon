/**
 * 2592. 대표값
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int MAX = 1001;
    int num, sum = 0, freq[MAX] = { 0, };

    for (int i = 0; i < 10; ++i)
    {
        cin >> num;

        freq[num]++;
        sum += num;
    }

    cout << sum / 10 << "\n";
    cout << distance(freq, max_element(freq, freq + MAX));
}
