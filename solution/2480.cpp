#include <iostream>
using namespace std;

int main()
{
    int d1, d2, d3, max;
    cin >> d1 >> d2 >> d3;

    if (d1 == d2)
    {
        cout << 1000 + d1 * 100;
        if (d2 == d3)
            cout << 0;
    }
    else
    {
        if (d1 == d3 || d2 == d3)
            cout << 1000 + d3 * 100;
        else
        {
            max = d1 < d2 ? d2 : d1;
            max = max < d3 ? d3 : max;
            cout << max * 100;
        }
    }

    return 0;
}