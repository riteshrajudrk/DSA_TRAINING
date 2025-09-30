#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    vector<string> words;
    int n;
    cin>>n;
    for(int i = 0; i < n ; i++){
        cin>>str;
        words.push_back(str);
    }
    for(int i = 0; i < n/2; i++){
        string str1 = words[i];
        string str2 = words[n-i-1];
        string ans = "";
        ans += str1.substr(0,i+1) + str2.substr(str2.size()-i-1,i+1);
        cout<<ans<<" ";
    }

}