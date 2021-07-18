#include <iostream>
#include <cstring>
using namespace std;
//최댓값 설정
const int MAX = 10000 + 1;
//DP table
int dp[MAX];
//포도주 양을 적는 table
int wine[MAX];

int main()
{
    int n = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> wine[i];

    dp[1] = wine[1];
    dp[2] = wine[1] + wine[2];

    //이제 위 분류에 맞게 dp table을 채워넣는다.
    for (int i = 3; i <= n; i++)
    {
        //i번째를 마실때
        dp[i] = max(dp[i - 2], wine[i - 1] + dp[i - 3]) + wine[i];
        //i번째를 안마실때++
        dp[i] = max(dp[i], dp[i - 1]);
    }

    cout << dp[n] << endl;
    return 0;
}