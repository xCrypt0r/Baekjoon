/**
 * 2475. 검증수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 21일
 */

#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4, n5;

    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << (n1 * n1 + n2 * n2 + n3 * n3 + n4 * n4 + n5 * n5) % 10;
}
