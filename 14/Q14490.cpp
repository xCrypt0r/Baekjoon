#include <iostream>
#include <cstring>
#include <string>

#define N 100

using namespace std;

int gcd(int a, int b);

int main()
{
    char input[N];
    char* token;
    int n, m, divider;
    const char* delim = ":";

    cin >> input;

    token = strtok(input, delim);
    n = stoi(token);
    token = strtok(NULL, delim);
    m = stoi(token);
    divider = gcd(n, m);

    cout << n / divider << ":" << m / divider;
}

int gcd(int a, int b)
{
	return a % b ? gcd(b, a % b) : b;
}
