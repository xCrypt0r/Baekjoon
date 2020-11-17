/**
 * 5532. 방학 숙제
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 29일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int L, A, B, C, D;

    cin >> L >> A >> B >> C >> D;
    cout << L - max(A % C ? A / C + 1 : A / C, B % D ? B / D + 1 : B / D);
}
