
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    string str;
    cin>>N>>K;
    cin.ignore();
    getline(cin,str);
    string ans;

    ans = str.substr(K,N-K) + str.substr(0,K);
    cout<<ans;
}
