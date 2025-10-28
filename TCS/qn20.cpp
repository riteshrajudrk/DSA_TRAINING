#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    getline(cin,S);
    int l=0,r=0,i=0,cnt=0;
    while(i < S.size()){
        
        if(S[i] == 'L') l++;
        else r++;
        if(l == r) {
            cnt++;
            l = 0,r = 0;
        }
        i++;
    }
    cout<< cnt;
}