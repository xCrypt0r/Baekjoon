/**
 * 14038. Tournament Selection
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 12일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int size = 6;
    char result[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> result[i];
    }

    int wins = count(result, result + size, 'W');

    cout << (wins >= 5 ? 1 : wins >= 3 ? 2 : wins >= 1 ? 3 : -1);
}
