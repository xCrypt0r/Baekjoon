#include <iostream>

using namespace std;

int main()
{
    string quiz;

    getline(cin, quiz);

    bool is_correct = quiz[0] + quiz[4] - '0' * 2 == quiz[8] - '0';

    cout << (is_correct ? "YES" : "NO");
}
