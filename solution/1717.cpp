#include <cstdio>
#include <cstring>
using namespace std;
//최댓값 설정
const int MAX = 1000000 + 1;
//root table
int root[MAX];

//root 찾기 최적화 : 루트를 찾을때마다 최고 루트를 저장시킴
int Find(int x)
{
    if (root[x] == x)
        return x;
    else
        return root[x] = Find(root[x]);
}

//union 연산 최적화 : 트리의 사이즈를 최소한으로 만들어줌
void Union(int x, int y)
{
    x = Find(x);
    y = Find(y);
    if (x != y)
        root[x] = y;
}

int main()
{
    //입력사항 초기화
    int n, m, input, x, y;
    scanf("%d %d", &n, &m);
    for (int i = 0; i <= n; i++)
        root[i] = i;

    //input값에 따라 맞는 처리를 실행함
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d %d", &input, &x, &y);
        if (input == 1)
        {
            if (Find(x) == Find(y))
                printf("YES\n");
            else
                printf("NO\n");
        }
        else if (input == 0)
            Union(x, y);
    }

    return 0;
}