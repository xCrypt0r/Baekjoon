/**
 * 1085. 직사각형에서 탈출
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 19일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, w, h;

    cin >> x >> y >> w >> h;
    cout << min({x, y, w - x, h - y}) << endl;
}
