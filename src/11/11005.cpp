/**
 * 11005. 진법 변환 2
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, B, reminder, sum = 0;
    string res;

    cin >> N >> B;

    while (N > 0)
    {
        reminder = N % B;
        N /= B;
        res += (char)(reminder > 9 ? reminder + 55 : reminder + 48);
    }

    reverse(res.begin(), res.end());

    cout << res;
}
