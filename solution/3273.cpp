#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
//최댓값 설정
const int MAX = 100000 + 1;

int arr[MAX];

int main()
{
    int n, x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);
    sort(arr + 1, arr + n + 1);

    //투포인터 s와 e, 조건을 만족하는 쌍의 수 pair, 비교인자 factor
    int s = 1, e = n, pair = 0, factor;
    while (s < e)
    {
        //비교 인자
        factor = arr[s] + arr[e] - x;
        if (factor > 0)
            e--;
        else if (factor < 0)
            s++;
        else
        {
            //수열 a에 서로 같은 정수는 존재하지 않기 때문에 --,++를 동시에 해줘도 괜찮다
            pair++;
            e--;
            s++;
        }
    }

    printf("%d", pair);

    return 0;
}