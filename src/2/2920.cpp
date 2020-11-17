/**
 * 2920. 음계
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>

using namespace std;

int main()
{
    const int size = 8;
    int num[size], asc = 0, desc = 0;

    for (int i = 0; i < size; ++i)
    {
        cin >> num[i];

        if (num[i] == i + 1)
        {
            asc++;
        }
        else if (num[i] == 8 - i)
        {
            desc++;
        }
    }

    cout << (asc == 8 ? "ascending" : desc == 8 ? "descending" : "mixed");
}
