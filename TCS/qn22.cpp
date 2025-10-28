#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin, S);
    int count = 0;
    string temp = "";
    int i = S.size();
    while (i >= 0)
    {
        if ((isalpha(S[i])))
        {
            temp += S[i];
        }
        if (S[i] == ' ')
        {
            cout << temp.size();
            temp = "";
            break;
        }
        i--;
    }
    if(!temp.empty()) cout<<temp.size();
}
