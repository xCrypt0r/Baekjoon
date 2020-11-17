/**
 * 8949. 대충 더해
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string A, B;
    vector<int> res;

    cin >> A >> B;

    int i = A.size(), j = B.size();

    for (; i >= 0 && j >= 0; --i, --j)
    {
        res.emplace_back(A[i] + B[j] - '0' * 2);
    }

    while (i >= 0)
    {
        res.emplace_back(A[i--] - '0');
    }

    while (j >= 0)
    {
        res.emplace_back(B[j--] - '0');
    }

    for (int i = res.size() - 1; i > 0; --i)
    {
        cout << res[i];
    }
}
