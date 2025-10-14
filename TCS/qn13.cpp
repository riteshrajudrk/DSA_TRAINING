#include<bits/stdc++.h>
using namespace std;

string func(string s, string r){
    int index = s.find(r);
    int len_r = r.length();
    int len_s = s.length();
    while(index >= 0){
        if(index == 0){
        s = s.substr(index + len_r);
    }else if(index < s.size()){
        string s1 = s.substr(0,index);
        string s2 = string(len_r, s1.back());
        string s3  = s.substr(index+len_r);
        s = s1+s2+s3;
    }else{
        string s1 = s.substr(0,index);
        string s2 = string(len_r, s1.back());
        s = s1+s2;
    }
    index = s.find(r);
    }
    return s;
}

int main(){
    string s,r;
    cin>>s>>r;

    cout<<func(s,r);
}