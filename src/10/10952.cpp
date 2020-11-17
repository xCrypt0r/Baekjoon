/**
 * 10952. A+B - 5
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B;

    while (true)
    {
        cin >> A >> B;

        if (A == 0 && B == 0)
        {
            break;
        }
        else
        {
            cout << A + B << "\n";
        }
    }
}
