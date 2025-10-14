#include<bits/stdc++.h>
using namespace std;
string leftRotate(string str,int k){
    int n = str.size();
    k = k%n;
    return str.substr(k,n-k)+str.substr(0,k);
}
string rightRotate(string str,int k){
    int n = str.size();
    k = k%n;
    return str.substr(n-k,k)+str.substr(0,n-k);
}
int main(){
    string s,r;
    int t;
    cin>>s>>r>>t;
    vector<int> arr(t);
    string temp = "";
    for(int i = 0; i < t; i++){
        cin>>arr[i];
    }
for(int num : arr){
    if(num >0){
        s = rightRotate(s,num);
    }else{
        s = leftRotate(s,-1 * num);
    }
}
if (s == r){
    cout<<"Password Accepted";
}else{
    cout<<"Try Again";
}
}