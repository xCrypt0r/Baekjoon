/**
 * 2755. 이번학기 평점은 몇점?
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,032 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 10월 19일
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>

using namespace std;

int main()
{
    int N;
    int credit;
    int sum_credit = 0;
    double sum_score = 0.0;
    string subject, grade;
    map<string, double> score = {
        { "A+", 4.3 }, { "A0", 4.0 }, { "A-", 3.7 },
        { "B+", 3.3 }, { "B0", 3.0 }, { "B-", 2.7 },
        { "C+", 2.3 }, { "C0", 2.0 }, { "C-", 1.7 },
        { "D+", 1.3 }, { "D0", 1.0 }, { "D-", 0.7 },
        { "F", 0.0 }
    };

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> subject >> credit >> grade;

        sum_credit += credit;
        sum_score += credit * score[grade];
    }

    cout << fixed << setprecision(2);
    cout << round(sum_score / sum_credit * 100) / 100 << endl;
}