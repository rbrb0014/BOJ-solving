#include <iostream>

using namespace std;

int main()
{
    /// abc 세자리 자연수
    int n, sum = 0, arr[42];
    for (int i = 0; i < 42; i++)
        arr[i] = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        arr[n % 42]++;
    }
    for (int i = 0; i < 42; i++)
    {
        if (arr[i] > 0)
            sum++;
    }
    cout<<sum;
    return 0;
}