/**
 * 11943. 파일 옮기기
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
    int A, B, C, D;

    cin >> A >> B >> C >> D;
    cout << min(A + D, B + C);
}
