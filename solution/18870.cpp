#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> x(n); // size=n인 vector x

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    vector<int> copy_x(x);              //중복제거배열만들 카피본
    sort(copy_x.begin(), copy_x.end()); //오름차순정렬
    //중복값을 뒤로 미루고 반환된 갑을 삭제
    copy_x.erase(unique(copy_x.begin(), copy_x.end()), copy_x.end());
    for (int i = 0; i < n; i++)
    {
        // i번째요소 주소값 it
        auto it = lower_bound(copy_x.begin(), copy_x.end(), x[i]);
        // it에서 복제벡터 시작주소값 뺀 값
        cout << it - copy_x.begin() << " ";
    }
    return 0;
}