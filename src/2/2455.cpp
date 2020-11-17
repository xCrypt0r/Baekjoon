/**
 * 2455. 지능형 기차
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 21일
 */

#include <iostream>
#include <algorithm>

#define SIZE 4

using namespace std;

int main()
{
    int in, out;
    int count[SIZE] = { 0 };

    for (int i = 0; i < SIZE; ++i)
    {
        cin >> out >> in;

        if (i > 0)
        {
            count[i] = count[i - 1];
        }

        count[i] += (in - out);
    }

    cout << *max_element(count, count + SIZE);
}
