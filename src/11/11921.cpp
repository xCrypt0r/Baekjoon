#include<stdio.h>

const int max = 1 << 20;

char buf[max];
int p;

inline char readChar()
{
	if (p == max)
	{
		fread(buf, 1, max, stdin);

		p = 0;
	}

	return buf[p++];
}

inline void readInt(int& x)
{
	int tmp;

	x = readChar() & 0b1111;

	while ((tmp = readChar()) != '\n')
	{
		x = x * 10 + (tmp & 0b1111);
	}
}

int main()
{
	int n;

	readInt(n);

	long long int sum = 0;

	for (int i = 0; i < n; i++)
	{
		int k;

		readInt(k);

		sum += k;
	}

	printf("%d\n%lld", n, sum);

	return 0;
}