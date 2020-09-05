#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string taebo;

    cin >> taebo;
    
    int left = count(taebo.begin(), taebo.begin() + taebo.find('('), '@');
    int right = count(taebo.begin() + taebo.find(')'), taebo.end(), '@');

    cout << left << " " << right;
}
