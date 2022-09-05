#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<int,string> a,pair<int,string>b)
{
    return a.first<b.first;//뒤에꺼가 큰게 맞아요
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, string>> member(n);
    for (int i = 0; i < n; i++)
        cin >> member[i].first >> member[i].second;
    //입력
    stable_sort(member.begin(), member.end(), compare);
    for (int i = 0; i < n; i++)
    {
        cout << member[i].first << " " << member[i].second << "\n";
    }
    return 0;
}