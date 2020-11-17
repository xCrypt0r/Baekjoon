/**
 * 17863. FYI
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 9일
 */

#include <iostream>

using namespace std;

int main()
{
    string N;

    cin >> N;
    cout << (N.substr(0, 3) == "555" ? "YES" : "NO");
}
