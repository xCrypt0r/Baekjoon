/**
 * 18301. Rats
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
    int n1, n2, n12;

    cin >> n1 >> n2 >> n12;
    cout << (n1 + 1) * (n2 + 1) / (n12 + 1) - 1;
}
