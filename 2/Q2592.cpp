#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int MAX = 1001;
    int num, sum = 0, freq[MAX] = { 0, };

    for (int i = 0; i < 10; ++i)
    {
        cin >> num;

        freq[num]++;
        sum += num;
    }

    cout << sum / 10 << "\n";
    cout << distance(freq, max_element(freq, freq + MAX));
}
