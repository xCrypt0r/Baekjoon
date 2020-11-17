/**
 * 13985. Equality
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>

using namespace std;

int main()
{
    string quiz;

    getline(cin, quiz);

    bool is_correct = quiz[0] + quiz[4] - '0' * 2 == quiz[8] - '0';

    cout << (is_correct ? "YES" : "NO");
}
