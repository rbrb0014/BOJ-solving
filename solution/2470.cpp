#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
//최댓값 설정
const int MAX = 100000 + 1;
//용액 저장
int sol[MAX];

bool compare(int a, int b)
{
    return abs(a) < abs(b);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &sol[i]);
    //절댓값의 오름차순으로 정렬
    sort(sol, sol + n, compare);

    int factor, sol1 = 0, sol2 = 1, mini = sol[0] + sol[1];

    /*
    sol[pin]와 sol[pin-1]을 비교한다.
    이때 pin=2부터 시작하기 때문에 sol[pin],sol[pin-1]은 0일 수 없다.
    용액의 종류는 모두 다르고, 특성값이 0인 용액이 있다면 그것은 sol[0]에
    들어갈 것이기 때문에, 두 용액의 특성값의 곱은 양수이거나 음수일수밖에 없다.
    즉, sol[pin]*sol[pin-1]=0일 걱정은 할 필요가 없어진다.
    */
    for (int pin = 2; pin < n; pin++)
    {
        factor = sol[pin] + sol[pin - 1];
        if (sol[pin] ^ sol[pin - 1] < 0 && abs(factor) < abs(mini))
        {
            mini = factor;
            sol1 = pin - 1;
            sol2 = pin;
        }
    }

    if (sol[sol1] > sol[sol2])
        swap(sol1, sol2);

    printf("%d %d", sol[sol1], sol[sol2]);

    return 0;
}