/**
 * 5063. TGN
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 22일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int r, e, c, gain;

    cin >> N;

    while (N--)
    {
        cin >> r >> e >> c;

        gain = e - c;

        if (r < gain)
        {
            cout << "advertise\n";
        }
        else if (r > gain)
        {
            cout << "do not advertise\n";
        }
        else
        {
            cout << "does not matter\n";
        }
    }
}
