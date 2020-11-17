/**
 * 17249. 태보태보 총난타
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,984 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 5일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string taebo;

    cin >> taebo;
    
    int left = count(taebo.begin(), taebo.begin() + taebo.find('('), '@');
    int right = count(taebo.begin() + taebo.find(')'), taebo.end(), '@');

    cout << left << " " << right;
}
