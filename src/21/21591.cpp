/**
 * 21591. Laptop Sticker
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
    int wc, hc, ws, hs;

    cin >> wc >> hc >> ws >> hs;

    bool res = wc >= ws + 2 && hc >= hs + 2;

    cout << res << endl;
}
