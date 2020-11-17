/**
 * 15596. 정수 N개의 합
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 13,704 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <vector>

long long sum(std::vector<int> &a)
{
    long long ret = 0;

    for (int i = 0; i < a.size(); ++i)
    {
        ret += a[i];
    }

    return ret;
}