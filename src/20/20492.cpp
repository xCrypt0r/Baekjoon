/**
 * 20492. 세금
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
    int money;
    int res1, res2;

    cin >> money;

    res1 = money * 0.78;
    res2 = money * 0.956;

    cout << res1 << " " << res2 << endl;
}
