#include <iostream>
using namespace std;

int main()
{
    int A, B, n1, n2, n3;
    cin >> A >> B;

    n1 = A * (B % 10);
    n2 = A * (B / 10 % 10);
    n3 = A * (B / 100);
    cout << n1 << "\n"
         << n2 << "\n"
         << n3 << "\n"
         << n1 + n2 * 10 + n3 * 100;

    return 0;
}