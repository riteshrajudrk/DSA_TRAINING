#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    cin.ignore();
    vector<string> words(n);
    for(int i = 0; i < n; i++){
        getline(cin,words[i]);
    }
    for(int i = 0; i < m; i++){
        cout<<words[i].length()<<" "<<words[n-1].length();
    }
    // cout<<ans;
}