#include <iostream>
#include <cstring>
using namespace std;
//최댓값 설정
const int MAX = 1000000 + 1;
//DP table
int dp[MAX];

int main()
{
    //n 선언 및 입력
    int n;
    scanf("%d", &n);

    //dp 초기정보 입력
    dp[0]=1;
    dp[1]=1;
    //dp 순환, 저장시 15746으로 미리 나누기
    for(int i=2;i<=n;i++)
        dp[i]=(dp[i-1]+dp[i-2])%15746;
    //결과 출력
    printf("%d",dp[n]);
    
    return 0;
}