/**
 * 10824. 네 수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B, C, D;

    cin >> A >> B >> C >> D;
    cout << stol(A + B) + stol(C + D);
}
