/**
 * 2577. 숫자의 개수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    int count[10] = { 0 };

    cin >> A >> B >> C;

    int res = A * B * C;

    while (res != 0)
    {
        count[res % 10]++;
        res /= 10;
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << count[i] << '\n';
    }
}
