// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     string temp = "";
//     for (char ch : s)
//     {
//         if (isalpha(ch))
//             temp += ch;
//     }
//     reverse(temp.begin(), temp.end());
//     int k = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (isalpha(s[i]))
//         {
//             s[i] = temp[k++];
//         }
//     }
//     cout << s;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = 0, r = s.size();
    while(l < r){
        while(!isalpha(s[l])) l++;
        while(!isalpha(s[r])) r--;
        swap(s[l++],s[r--]);
    }
    cout << s;
}