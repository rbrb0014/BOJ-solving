#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;
    char n;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        sum += n - 48;
    }
    cout << sum;

    return 0;
}