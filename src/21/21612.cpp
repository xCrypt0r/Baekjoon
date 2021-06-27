/**
 * 21612. Boiling Water
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,020 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 6월 28일
 */

#include <iostream>

using namespace std;

int main()
{
    int B;

    cin >> B;

    int P = B * 5 - 400;

    cout << P << endl;
    cout << (P > 100 ? -1 : P == 100 ? 0 : 1) << endl;
}
