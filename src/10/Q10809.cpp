#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string S;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    cin >> S;

    for_each(alphabet.begin(), alphabet.end(), [S](const char& c) {
        cout << (int)S.find(c) << ' ';
    });
}
