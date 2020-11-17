/**
 * 6359. 만취한 상범
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 22일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n;

    cin >> T;

    while (T--)
    {
        cin >> n;

        bool opened[n + 1];

        fill(opened + 1, opened + n + 1, true);

        for (int i = 2; i <= n; ++i)
        {
            for (int j = 1; i * j <= n; ++j)
            {
                opened[i * j] = !opened[i * j];
            }
        }

        cout << count(opened + 1, opened + n + 1, true) << '\n';
    }
}