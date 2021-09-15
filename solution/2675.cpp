#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, R;
    string S, P = "";
    cin >> T; //반복횟수 입력

    for (int i = 0; i < T; i++)
    {
        P = ""; //P 초기화
        cin >> R >> S;
        //S의 길이만큼 반복하는데, j번재자리수를 R번 반복해서 만듦
        for (int j = 0; j < S.length(); j++)
            for (int k = 0; k < R; k++)
                P += S.at(j);
        
        cout << P << endl;
    }

    return 0;
}