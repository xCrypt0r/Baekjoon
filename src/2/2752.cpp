/**
 * 2752. 세수정렬
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 30일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size = 3;
    int num[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> num[i];
    }

    sort(num, num + size);

    for (int i = 0; i < size; ++i)
    {
        cout << num[i] << " ";
    }
}
