/**
 * 10162. 전자레인지
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 11일
 */

#include <iostream>

using namespace std;

int main()
{
    const int size = 3;
    const int time[size] = { 300, 60, 10 };
    int T, count[size] = { 0 };

    cin >> T;

    if (T % 10 != 0)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < size; ++i)
        {
            if (T >= time[i])
            {
                count[i] = T / time[i];
                T %= time[i];
            }
        }

        for (const auto& c : count)
        {
            cout << c << " ";
        }
    }
}
