/**
 * 3449. 해밍 거리
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 9일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    string a, b;

    cin >> T;

    while (T--)
    {
        int distance = 0;

        cin >> a >> b;

        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] != b[i])
            {
                distance++;
            }
        }

        cout << "Hamming distance is " << distance << "." << "\n";
    }
}
