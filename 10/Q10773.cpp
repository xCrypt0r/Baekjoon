#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int K, num, sum = 0;
    vector<int> numbers;

    cin >> K;

    while (K--)
    {
        cin >> num;

        if (num == 0)
        {
            numbers.pop_back();
        }
        else
        {
            numbers.push_back(num);
        }
    }

    for (int i = 0; i < numbers.size(); ++i)
    {
        sum += numbers[i];
    }

    cout << sum;
}
