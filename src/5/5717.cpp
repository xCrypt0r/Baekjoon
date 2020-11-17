/**
 * 5717. 상근이의 친구들
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 23일
 */

#include <iostream>

using namespace std;

int main()
{
    int M, F;

    while (true)
    {
        cin >> M >> F;

        if (M == 0 && F == 0)
        {
            break;
        }

        cout << M + F << "\n";
    }
}
