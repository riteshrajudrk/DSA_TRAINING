#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    string temp = "";
    string ans = "";
    for(int i = 0; i < s.size(); i++ ){
int pos = i+1;
        if(pos % 4 == 0 || pos % 6 == 0)temp += s[i];
        
        else ans += s[i];
    }

    cout<<ans+temp;
}