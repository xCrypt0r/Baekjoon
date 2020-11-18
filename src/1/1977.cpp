/**
 * 1977. 완전제곱수
 *
 * 작성자: Raccoon Dog
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 24일
 */

#include <iostream>

using namespace std;

int main()
{
    int m, n;
    int min = 0, sum = 0;

    cin >> m >> n;

    for(int i = m; i <= n; i++)
    {
        int j = 1;

        while(j * j < i)
        {
            j++;
        }

        if(j * j == i)
        {
            sum += j * j;
        }

        if(min == 0)
        {
            min = j * j;
        }
    }

    if(sum == 0)
    {
        cout << "-1";
    }
    else
    {
        cout << sum << "\n" << min << "\n";
    }
}
