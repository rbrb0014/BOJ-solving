#include <iostream>
#include <cstring>
#include <utility>
#include <algorithm>
using namespace std;
//최댓값 설정
const int MAX = 100 + 1;
//DP table
int dp[MAX];
pair<int, int> pole[MAX];

int main()
{
    //입력부
    int n, result = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        pole[i] = make_pair(a, b);
    }
    sort(pole, pole + n + 1);

    //계산/출력부
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
            if (pole[j].second < pole[i].second)
                dp[i] = max(dp[i], dp[j]);
        dp[i]++;
        result = max(result, dp[i]);
    }

    cout << n - result << endl;

    return 0;
}