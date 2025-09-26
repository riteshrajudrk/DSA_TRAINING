
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    string str;
    cin>>N>>K;
    cin.ignore();
    getline(cin,str);
    string ans = "";
    bool flag = false;
    for(int i = 0; i < str.size(); i+=K){
        if(!flag){
            ans += str.substr(i,K);
            flag = !flag;
        }else{
            reverse(str.begin()+i,str.begin()+i+K);
            ans += str.substr(i,K);
            flag = !flag;
        }

    }
    cout<<ans;
}

