#include <iostream>

using namespace std;

int main()
{
    int arr_size = 5;
    int score[arr_size];
    int avg, sum = 0;

    for (int i = 0; i < arr_size; ++i)
    {
        cin >> score[i];
        sum += score[i] < 40 ? 40 : score[i];
    }

    cout << sum / arr_size << endl;
}
