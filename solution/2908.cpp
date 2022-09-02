#include <iostream>
using namespace std;
int flip(int);
int main()
{
    int a, b;
    cin >> a >> b;
    a = flip(a);
    b = flip(b);
    cout << (a > b ? a : b);

    return 0;
}
int flip(int x)
{
    int tmp = 0;
    for (int i = 0; i < 3; i++)
    {
        tmp *= 10;
        tmp += x % 10;
        x /= 10;
    }
    return tmp;
}