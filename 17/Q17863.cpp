#include <iostream>

using namespace std;

int main()
{
    string N;

    cin >> N;
    cout << (N.substr(0, 3) == "555" ? "YES" : "NO");
}
