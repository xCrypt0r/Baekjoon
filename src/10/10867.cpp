/**
 * 10867. 중복 빼고 정렬하기
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 40 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>
#include <set>

using namespace std;

int main()
{
    int N, num;
    set<int> s;

    cin >> N;

    while (N--)
    {
        cin >> num;

        s.insert(num);
    }

    for (const auto& n : s)
    {
        cout << n << " ";
    }
}
