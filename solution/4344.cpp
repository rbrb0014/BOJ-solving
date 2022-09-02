#include <iostream>

using namespace std;

int main()
{
    int c, n, score[1001];
    float aver, per;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> n;
        aver = 0;
        per = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> score[i];
            aver += score[i];
        }
        aver /= n;
        for (int i = 1; i <= n; i++)
        {
            if (score[i] > aver)
                per += 1;
        }
        per *= 100;
        per /= n;
        cout << fixed;
        cout.precision(3);
        cout << per << "%\n";
    }
    return 0;
}