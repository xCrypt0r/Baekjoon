/**
 * 3034. 앵그리 창영
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,996 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 29일
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, W, H, len;

    cin >> N >> W >> H;

    while (N--)
    {
        cin >> len;

        if (len <= W || len <= H || len <= sqrt(W * W + H * H))
        {
            cout << "DA\n";
        }
        else
        {
            cout << "NE\n";
        }
    }
}
