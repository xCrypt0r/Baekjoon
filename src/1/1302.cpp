/**
 * 1302. 베스트셀러
 * 
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 1,992 KB
 * 소요 시간: 0 ms
 * 해결 날짜: 2020년 9월 13일
 */

#include <iostream>
#include <map>

using namespace std;

int main()
{
    int N, max = 0;
    map<string, int> books;
    string title, bestseller;

    cin >> N;

    while (N--)
    {
        cin >> title;

        books[title]++;
    }

    for (const auto& book : books)
    {
        if (book.second > max)
        {
		    max = book.second;
            bestseller = book.first;
        }
    }

    cout << bestseller;
}
