/**
 * 9498. 시험 성적
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 13일
 */

#include <iostream>

using namespace std;

int main()
{
    int score;

    cin >> score;
    
    if (score < 60)
    {
        cout << "F" << endl;
    }
    else if (score < 70)
    {
        cout << "D" << endl;
    }
    else if (score < 80)
    {
        cout << "C" << endl;
    }
    else if (score < 90)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "A" << endl;
    }
}