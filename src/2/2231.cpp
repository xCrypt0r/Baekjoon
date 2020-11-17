/**
 * 2231. 분해합
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2020년 9월 4일
 */

#include <iostream>

using namespace std;

int get_sum(int n);

int main()
{
    int N;
    bool has_creator;

    cin >> N;

    for (int i = 1; i <= 1000000; ++i)
    {
        has_creator = false;

        if (get_sum(i) == N)
        {
            cout << i;

            has_creator = true;

            break;
        }
    }

    if (!has_creator)
    {
        cout << 0;
    }
}

int get_sum(int n)
{
    int sum = n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}
