#include <iostream>
using namespace std;

int star[5000][5000] = {0};

void stars(int size, int x, int y)
{ // k:k층
    if (size == 1)
    {
        star[x][y] = 1;
        return;
    }
    int next_S = size / 3;
    stars(next_S, x - next_S * 2, y - next_S * 2);
    stars(next_S, x - next_S * 2, y - next_S);
    stars(next_S, x - next_S * 2, y);

    stars(next_S, x - next_S, y - next_S * 2);

    stars(next_S, x - next_S, y);
    
    stars(next_S, x, y - next_S * 2);
    stars(next_S, x, y - next_S);
    stars(next_S, x, y);
}

int main()
{
    int n; // n=3^k   3,9,27,81..
    cin >> n;
    stars(n, n, n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (star[i][j] == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}