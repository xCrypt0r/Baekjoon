/**
 * 11021. A+B - 7
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 15일
 */

#include <iostream>

using namespace std;

int main()
{
    int T, A, B;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> T;

    for (int i = 1; i <= T; ++i)
    {
        cin >> A >> B;
        cout << "Case #" << i << ": " << A + B << "\n";
    }
}
