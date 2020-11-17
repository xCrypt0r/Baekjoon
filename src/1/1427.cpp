/**
 * 1427. 소트인사이드
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,988 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 8월 17일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string N;
    
    cin >> N;
	
    sort(N.begin(), N.end(), greater<char>());
    
    cout << N;
}
