/**
 * 1874. 스택 수열
 *
 * 작성자: xCrypt0r
 * 언어: C++14
 * 사용 메모리: 3,056 KB
 * 소요 시간: 56 ms
 * 해결 날짜: 2021년 11월 13일
 */

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	int n, x;
    int count = 0;
	vector<int> v;
	stack<int> s;
	vector<char> res;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;

		v.push_back(x);
	}

	for (int i = 1; i <= n; i++)
	{
		s.push(i);
		res.push_back('+');

		while (!s.empty())
		{
			if (s.top() != v.at(count))
			{
				break;
			}

            s.pop();
            res.push_back('-');
            count++;
		}
	}

	if (s.empty())
	{
		for (auto& i : res)
        {
            cout << i << '\n';
        }
	}
	else
    {
        cout << "NO" << endl;
    }
}