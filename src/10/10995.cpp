/**
 * 10995. 별 찍기 - 20
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {       
            cout << (i & 1 ? "* " : " *");
        }

        cout << "\n";
    }
}
