#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;

    cin>>n;

    cin.ignore();
    getline(cin, str);

    string temp1 = "";
    int sum = 0;
    
    for(char ch : str){
        if(isalpha(ch)){
            temp1 += ch;
        }else{
            sum += ((ch-'0') * (ch - '0'));
        }
    }
    int N = temp1.size();
    string ans;
    sum = sum % N;
    if(sum %2 == 0){
         ans = temp1.substr(N-sum, sum) + temp1.substr(0,N-sum);
    }else{
         ans = temp1.substr(sum, N-sum) + temp1.substr(0, sum);
    }
    cout<<ans;
}