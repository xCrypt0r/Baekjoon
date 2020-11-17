/**
 * 10039. 평균 점수
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 15일
 */

#include <iostream>

using namespace std;

int main()
{
    int arr_size = 5;
    int score[arr_size];
    int avg, sum = 0;

    for (int i = 0; i < arr_size; ++i)
    {
        cin >> score[i];
        sum += score[i] < 40 ? 40 : score[i];
    }

    cout << sum / arr_size << endl;
}
