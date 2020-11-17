/**
 * 15727. 조별과제를 하려는데 조장이 사라졌다
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,980 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 12일
 */

#include <iostream>

using namespace std;

int main()
{
    int L;

    cin >> L;
    cout << (L - 1) / 5 + 1;
}
