#include <iostream>
using namespace std;

int main()
{
    int n, m, card[100], sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> card[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (i == j || j == k || k == i)
                    continue;
                int cards = card[i] + card[j] + card[k];
                if (sum < cards && cards <= m)
                    sum = cards;
            }
        }
    }
    cout << sum;
    return 0;
}