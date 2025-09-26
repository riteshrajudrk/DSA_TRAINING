
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    string str;
    cin>>N>>K;
    cin.ignore();
    getline(cin,str);
    string ans;
    K = K % N;
    ans = str.substr(N-K, K) + str.substr(0,N-K);
    cout<<ans;
}

