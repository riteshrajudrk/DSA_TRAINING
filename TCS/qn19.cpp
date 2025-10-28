#include<bits/stdc++.h>
using namespace std;
int main(){
    string S,R;
    getline(cin,S);
    getline(cin,R);
    sort(S.begin(),S.end());
    sort(R.begin(),R.end());
    if(S == R ) cout<<"True";
    else cout<<"False";
}