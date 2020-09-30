#include <iostream>
#include <regex>

using namespace std;

int main()
{
    string S;
    regex r("([aeiou])p\\1");

    getline(cin, S);
    
    cout << regex_replace(S, r, "$1");
}
