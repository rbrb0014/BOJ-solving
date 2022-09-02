#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int num = 0;
    bool space = false;
    if (s.empty())
    {
        cout << "0";
        return 0;
    }
    num = 1;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == ' ')
            num++;

    if (s[0] == ' ')
        num--;
    if (s[s.length() - 1] == ' ')
        num--;

    cout << num;
    return 0;
}