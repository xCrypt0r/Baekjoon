#include <iostream>

using namespace std;

int main()
{
	int n;
	bool is_prime = true;

	cin >> n;

	if (n > 2 && n % 2 == 0)
	{
	    is_prime = false;
	}

	for (int i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			is_prime = false;

			break;
		}
	}

	cout << (is_prime ? "Yes" : "No");
}