#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a % 4 == 0)
        if (a % 400 == 0 || a % 100 != 0)
        {
            cout << 1;
            return 0;
        }

    cout << 0;

    return 0;
}