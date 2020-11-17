/**
 * 2745. 진법 변환
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 29일
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string N;
    int B, temp, res = 0;

    cin >> N >> B;

    for (int i = 0; i < N.length(); ++i)
    {
        temp = isalpha(N[i]) ? N[i] - 55 : N[i] - 48;

        for (int j = 0; j < N.length() - i - 1; ++j)
        {
            temp *= B;
        }

        res += temp;
    }

    cout << res;
}
