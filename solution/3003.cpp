#include <iostream>
using namespace std;

int main()
{
    //킹1 퀸1 룩2 비2 나2 폰8
    int a[6], b[6] = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
        cout << b[i] - a[i] << " ";
    }

    return 0;
}