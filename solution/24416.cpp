#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 1 or n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int fibonacci(int n)
{
    return n - 2;
}
int main()
{
    int a;
    cin >> a;
    cout << fib(a) << " " << fibonacci(a);
    return 0;
}