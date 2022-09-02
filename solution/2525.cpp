#include <iostream>
using namespace std;

int main()
{
    int h, m, add_min;
    cin >> h >> m >> add_min;

    h = ((m + add_min) / 60 + h) % 24;
    m = (m + add_min) % 60;

    cout << h << " " << m;

    return 0;
}