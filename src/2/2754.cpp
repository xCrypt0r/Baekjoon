/**
 * 2754. 학점계산
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,992 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 11일
 */

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, double> grades = {
        { "A+", 4.3 }, { "A0", 4.0 }, { "A-", 3.7 }, { "B+", 3.3 },
        { "B0", 3.0 }, { "B-", 2.7 }, { "C+", 2.3 }, { "C0", 2.0 },
        { "C-", 1.7 }, { "D+", 1.3 }, { "D0", 1.0 }, { "D-", 0.7 },
        { "F", 0.0 }
    };
    string grade;

    cin >> grade;
    cout << fixed;
    cout.precision(1);
    cout << grades[grade];
}
