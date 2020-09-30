#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> score(8), temp, index;

    int sum = 0;

    for (int i = 0; i < 8; ++i)
    {
        cin >> score[i];
        temp.push_back(score[i]);
    }

    sort(temp.begin(), temp.end());

    for (int i = 0; i < 8; ++i)
    {
        for (int j = 3; j < 8; ++j)
        {
            if (score[i] == temp[j])
            {
                sum += score[i];
                index.push_back(i + 1);
                continue;
            }
        }
    }

    cout << sum << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << index[i] << " ";
    }
}
