#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N;
    queue<int> cards;

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        cards.push(i);
    }

    while (!cards.empty())
    {
        cout << cards.front() << " ";

        cards.pop();

        if (!cards.empty())
        {
            cards.push(cards.front());
            cards.pop();
        }
    }
}
