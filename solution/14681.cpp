#include <iostream>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;

    if (h > 0)
    {
        if (m > 0)
            cout << 1;
        else
            cout << 4;
    }
    else if (m > 0)
        cout << 2;
    else
        cout << 3;

    return 0;
}