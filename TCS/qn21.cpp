#include<bits/stdc++.h>
using namespace std;
int main(){
    string S1,S2;
    vector<char> ans;
    getline(cin,S1);
    getline(cin,S2);
    for(char ch : S1){
        if(count(S1.begin(), S1.end(),ch) == count(S2.begin(), S2.end(),ch)) ans.push_back(ch);
    }
    sort(ans.begin(), ans.end());
    for(auto a : ans) cout<<a<<" ";
    
    
}