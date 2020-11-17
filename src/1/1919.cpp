/**
 * 1919. 애너그램 만들기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 8일
 */

#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 26;
    string a, b;
    int A[SIZE] = { 0 }, B[SIZE] = { 0 };
    int count = 0;

    cin >> a >> b;

    for (const auto& c : a)
    {
        A[c - 'a']++;
    }

    for (const auto& c : b)
    {
        B[c - 'a']++;
    }

    for (int i = 0; i < SIZE; ++i)
    {
        count += abs(A[i] - B[i]);
    }

    cout << count;
}
