#include <iostream>

using namespace std;

int main()
{
    int a[26];
    char S[1000001];
    for (int i = 0; i < 26; i++)
        a[i] = 0;

    cin >> S;
    for (int i = 0; S[i] != '\0'; i++)
    {
        a[toupper(S[i]) - 'A']++;
    }

    char alpha = 0;
    int max = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > max)
        {
            alpha = i + 'A';
            max = a[i];
        }
        else if (a[i] == max)
        {
            alpha = '?';
        }
    }
    cout << alpha;

    return 0;
}