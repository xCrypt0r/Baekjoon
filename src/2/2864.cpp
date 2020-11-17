/**
 * 2864. 5와 6의 차이
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 22일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string A, B;

    cin >> A >> B;

    replace(A.begin(), A.end(), '5', '6');
    replace(B.begin(), B.end(), '5', '6');

    int max = stoi(A) + stoi(B);

    replace(A.begin(), A.end(), '6', '5');
    replace(B.begin(), B.end(), '6', '5');

    int min = stoi(A) + stoi(B);

    cout << min << ' ' << max;
}
