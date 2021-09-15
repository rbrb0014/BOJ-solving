#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n[8], asc = 0;
    for (int i = 1; i <= 8; i++)
        cin >> n[i];

    //i번재와 9-i번재의 합이 9가 아니면 mixed임
    for (int i = 1; i < 5; i++)
        if (n[i] + n[9 - i] != 9)
            asc = 2;

    if (asc == 0)
    {
        bool chk = true;
        for (int i = 1; i < 5; i++)
        {
            if (n[i] != i)
                chk = false;
        }
        if (chk)
            asc = 1;
        else
        {
            chk = true;

            for (int i = 1; i < 5; i++)
            {
                if (n[i] + i != 9)
                    chk = false;
            }
            if (chk)
                asc = 3;
            else
                asc = 2;
        }
    }

    switch (asc)
    {
    case 1:
        cout << "ascending";
        break;
    case 2:
        cout << "mixed";
        break;
    case 3:
        cout << "descending";
        break;
    }

    return 0;
}