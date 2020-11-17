/**
 * 4299. AFC 윔블던
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 12일
 */

#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;
    
    if ((A + B) & 1 || A < B)
    {
        cout << -1;
    }
    else
    {
        cout << (A + B) / 2 << " " << (A - B) / 2;
    }
}
