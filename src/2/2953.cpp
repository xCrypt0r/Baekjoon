/**
 * 2953. 나는 요리사다
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 22일
 */

#include <iostream>

using namespace std;

int main()
{
    int score, sum = 0;
    int index, max = 0;
    
    for (int i = 0; i < 5; ++i)
    {
        sum = 0;

        for (int j = 0; j < 4; ++j)
        {
            cin >> score;

            sum += score;
        }

        if (sum > max)
        {
            max = sum;
            index = i + 1;
        }
    }

    cout << index << ' ' << max;
}
