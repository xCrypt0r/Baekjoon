/**
 * 10984. 내 학점을 구해줘
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 11일
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T, N;

    cin >> T;

    while (T--)
    {
        cin >> N;

        int C, credits = 0;
        double G, gpa = 0.0;

        while (N--)
        {
            cin >> C >> G;

            gpa += C * G;
            credits += C;
        }
        
        gpa /= credits;

        cout << fixed;
        cout.precision(1);
        cout << credits << " " << gpa << "\n";
    }
}
