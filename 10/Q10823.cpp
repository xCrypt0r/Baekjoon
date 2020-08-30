#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S, num;
    int sum = 0;

    while (getline(cin, S))
    {
        for (int i = 0; i < S.length(); ++i)
        {
            if (S[i] != ',')
            {
                num += S[i];
            }
            else
            {
                sum += stoi(num);
                num = "";
            }
        }
    }

    sum += stoi(num);

    cout << sum;
}
