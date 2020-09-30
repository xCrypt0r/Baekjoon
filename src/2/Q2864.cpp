#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string A, B;

    cin >> A >> B;

    replace(A.begin(), A.end(), '5', '6');
    replace(B.begin(), B.end(), '5', '6');

    int max = stoi(A) + stoi(B);

    replace(A.begin(), A.end(), '6', '5');
    replace(B.begin(), B.end(), '6', '5');

    int min = stoi(A) + stoi(B);

    cout << min << ' ' << max;
}
