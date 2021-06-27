/**
 * 20976. 2 番目に大きい整数 (The Second Largest Integer)
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 2,020 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2021년 6월 28일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num[3];

    for (int i = 0; i < 3; ++i)
    {
        cin >> num[i];
    }

    sort(num, num + 3, greater<int>());

    cout << num[1] << endl;
}
