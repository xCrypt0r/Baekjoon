/**
 * 3058. 짝수를 찾아라
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 23일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;

    cin >> T;

    int num, min[T], sum[T] = { 0, };

    fill(min, min + T, 100);

    for (int i = 0; i < T; ++i)
    {
        for (int j = 0; j < 7; ++j)
        {
            cin >> num;

            if (num % 2 == 0)
            {
                if (num < min[i])
                {
                    min[i] = num;
                }

                sum[i] += num;
            }
        }

        cout << sum[i] << " " << min[i] << "\n";
    }
}
