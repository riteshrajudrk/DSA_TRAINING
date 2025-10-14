#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    if (n >= 0 && n < 10)
        return true;
    string str = to_string(n);
    for (int i = 1; i < str.size(); i++)
    {
        if (abs((str[i]) - (str[i - 1])) != 1)
            return false;
    }
    return true;
}

int main()
{
    int X;
    cin >> X;
    for (int i = 0; i <= X; i++)
    {
        if (check(i))
            cout << i << " ";
    }
}