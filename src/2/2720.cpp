/**
 * 2720. 세탁소 사장 동혁
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 20 ms
 * 해결 날짜: 2020년 8월 23일
 */

#include <iostream>

using namespace std;

int main()
{
    int T, C;

    cin >> T;

    while (T--)
    {
        cin >> C;
        
        cout << C / 25 << " ";
        C %= 25;

        cout << C / 10 << " ";
        C %= 10;
        
        cout << C / 5 << " ";
        C %= 5;

        cout << C << "\n";
    }
}
