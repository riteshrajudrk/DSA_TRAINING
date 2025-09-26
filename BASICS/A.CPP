#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    int hashCount = count(str.begin(), str.end(), '#');
    int andCount = count(str.begin(), str.end(), '&');
    int strLen = str.size();
    if(hashCount >0 && andCount > 0 && strLen%2 == 0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}