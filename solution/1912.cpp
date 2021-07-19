#include <iostream>
using namespace std;
const int MAX = 100000 + 1;
int dp[MAX];

int main()
{
    //입력부
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> dp[i];
    int result = dp[1];

    //dp table 채우기. 음수값의 dp는 무시한다.
    for (int i = 2; i <= n; i++)
    {
        if (dp[i - 1] > 0)
            dp[i] += dp[i - 1];
        result = max(result, dp[i]);
    }
    cout << result << endl;
    return 0;
}