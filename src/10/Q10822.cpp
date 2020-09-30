#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    string delim = ",";
    size_t pos = 0;
    int sum = 0;

    cin >> S;

    while ((pos = S.find(delim)) != string::npos)
    {
        sum += stoi(S.substr(0, pos));
        S.erase(0, pos + delim.length());
    }

    sum += stoi(S);

    cout << sum;
}
