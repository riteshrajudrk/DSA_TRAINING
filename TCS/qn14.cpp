#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string temp = "";
    for(char ch : s1){
        if(s2.find(ch) == -1) temp+=ch;
    }
    cout<<temp;
}