#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<string> v;
    //시작idx
    for (int i = 0; i < s.length(); i++)
    {
        //길이
        for (int j = 1; i + j - 1 < s.length(); j++)
            v.push_back(s.substr(i, j));
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << v.size();
    return 0;
}