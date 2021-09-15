#include <iostream>
using namespace std;

int main()
{
    int N, tmp, max = -1000001, min = 1000001;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> tmp;
        if (max < tmp)
            max = tmp;
        if (min > tmp)
            min = tmp;
    }
    cout << min << " " << max;
    return 0;
}