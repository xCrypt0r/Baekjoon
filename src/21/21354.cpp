/**
 * 21354. Äpplen och päron
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
    int A, P;

    cin >> A >> P;

    int diff = A * 7 - P * 13;

    cout << (diff > 0 ? "Axel" : diff < 0 ? "Petra" : "lika") << endl;
}
