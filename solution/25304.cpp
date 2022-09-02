#include <iostream>
using namespace std;

int main()
{
    int X, N;
    cin >> X >> N;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        X -= a * b;
    }
    cout << (X ? "No" : "Yes");

    return 0;
}