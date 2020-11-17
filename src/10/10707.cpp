/**
 * 10707. 수도요금
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 22일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int A, B, C, D, P;
    int fee_x, fee_y;

    cin >> A >> B >> C >> D >> P;

    fee_x = A * P;
    fee_y = P > C ? B + (P - C) * D : B;

    cout << min(fee_x, fee_y);
}
